# tree-sitter-riscv

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) parser for the RISC-V and MIPS assembly languages, aiming for covering most features of all major assemblers and simulators

[![CI](https://img.shields.io/github/actions/workflow/status/omeyenburg/tree-sitter-riscv/ci.yml?logo=github&label=CI)](https://github.com/omeyenburg/tree-sitter-riscv/actions/workflows/ci.yml)
[![crates](https://img.shields.io/crates/v/tree-sitter-riscv?logo=rust)](https://crates.io/crates/tree-sitter-riscv)
[![npm](https://img.shields.io/npm/v/tree-sitter-riscv?logo=npm)](https://www.npmjs.com/package/tree-sitter-riscv)
[![pypi](https://img.shields.io/pypi/v/tree-sitter-riscv?logo=pypi&logoColor=white)](https://pypi.org/project/tree-sitter-riscv)
[![go](https://img.shields.io/badge/go-v0.3.0-fe7d37?logo=go&logoColor=white)](https://pkg.go.dev/github.com/omeyenburg/tree-sitter-riscv)

![Syntax highlighting in NeoVim](assets/riscv.png)

## Quick Start

This parser is available for JavaScript, Python, Rust, Go, and C, and integrates with NeoVim.

See [Editor Integration](docs/EDITOR_INTEGRATION.md) and [Language Integration](docs/LANGUAGE_INTEGRATION.md) for installation and integration instructions.

## Examples

Syntax highlighting for various grammar features:

<table>
  <tr>
    <td>
      <h3>Instructions</h3>
      <a href="examples/instructions.S">
        <img src="assets/instructions.png" alt="Instructions preview">
      </a>
    </td>
    <td>
      <h3>Directives</h3>
      <a href="examples/directives.S">
        <img src="assets/directives.png" alt="Directives preview">
      </a>
    </td>
  </tr>
  <tr>
    <td>
      <h3>Expressions</h3>
      <a href="examples/expressions.S">
        <img src="assets/expressions.png" alt="Expressions preview">
      </a>
    </td>
    <td>
      <h3>Labels</h3>
      <a href="examples/labels.S">
        <img src="assets/labels.png" alt="Labels preview">
      </a>
    </td>
  </tr>
  <tr>
    <td>
      <h3>Comments</h3>
      <a href="examples/comments.S">
        <img src="assets/comments.png" alt="Comments preview">
      </a>
    </td>
    <td>
      <h3>Macros</h3>
      <a href="examples/macros.S">
        <img src="assets/macros.png" alt="Macros preview">
      </a>
    </td>
  </tr>
</table>

## Documentation

- [Editor Integration](docs/EDITOR_INTEGRATION.md) - NeoVim installation
- [Language Integration](docs/LANGUAGE_INTEGRATION.md) - JavaScript, Python, Rust, Go, C
- [AST Reference](docs/AST.md) - Node type reference
- [Development](docs/DEVELOPMENT.md) - Building and testing
