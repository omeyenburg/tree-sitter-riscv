import XCTest
import SwiftTreeSitter
import TreeSitterRiscV

final class TreeSitterRiscVTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_riscv())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading RISC-V grammar")
    }
}
