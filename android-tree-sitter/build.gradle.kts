import com.android.build.gradle.internal.tasks.factory.dependsOn
import com.itsaky.androidide.treesitter.BuildForHostTask
import com.itsaky.androidide.treesitter.BuildTsCliTask
import com.itsaky.androidide.treesitter.TreeSitterPlugin

plugins {
  id("com.android.library")
  id("com.vanniktech.maven.publish.base")
}

apply { plugin(TreeSitterPlugin::class.java) }

val rootProjDir: String = rootProject.projectDir.absolutePath
val tsDir = "${rootProjDir}/tree-sitter-lib"
val cppDir = project.file("src/main/cpp")

android {
  namespace = "com.itsaky.androidide.treesitter"
  ndkVersion = "24.0.8215888"

  defaultConfig {
    externalNativeBuild { cmake { arguments("-DPROJECT_DIR=${rootProjDir}", "-DTS_DIR=${tsDir}") } }
  }

  buildTypes {
    release {
      isMinifyEnabled = false
      proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
    }
  }

  externalNativeBuild {
    cmake {
      path = file("src/main/cpp/CMakeLists.txt")
      version = "3.22.1"
    }
  }
}

dependencies {
  testImplementation(project(path = ":tree-sitter-java"))
  testImplementation(project(path = ":tree-sitter-python"))
  testImplementation("com.google.truth:truth:1.1.3")
  testImplementation("junit:junit:4.13.2")
}

tasks.register<BuildForHostTask>("buildForHost") { libName = "android-tree-sitter" }
tasks.register<BuildTsCliTask>("buildTsCli")

tasks.create<Delete>("cleanHostBuild") { delete("src/main/cpp/host-build") }

tasks.named("clean").dependsOn("cleanHostBuild")

tasks.withType(JavaCompile::class.java) {
  dependsOn("buildTsCli")
  dependsOn("buildForHost") }
