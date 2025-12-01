// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterRiscV",
    products: [
        .library(name: "TreeSitterRiscV", targets: ["TreeSitterRiscV"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterRiscV",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterRiscVTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterRiscV",
            ],
            path: "bindings/swift/TreeSitterRiscVTests"
        )
    ],
    cLanguageStandard: .c11
)
