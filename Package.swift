// swift-tools-version:5.5
import PackageDescription

let package = Package(
        name: "Test",
        dependencies: [],
        targets: [
            .target(name: "CTest"),
            .executableTarget(name: "Test", dependencies: ["CTest"]),
        ]
)