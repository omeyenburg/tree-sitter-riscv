# tree-sitter-mips

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) parser for the MIPS and RISC-V assembly languages.

[![CI](https://img.shields.io/github/actions/workflow/status/omeyenburg/tree-sitter-mips/ci.yml?logo=github&label=CI)](https://github.com/omeyenburg/tree-sitter-mips/actions/workflows/ci.yml)
[![crates](https://img.shields.io/crates/v/tree-sitter-mips?logo=rust)](https://crates.io/crates/tree-sitter-mips)
[![npm](https://img.shields.io/npm/v/tree-sitter-mips?logo=npm)](https://www.npmjs.com/package/tree-sitter-mips)
[![pypi](https://img.shields.io/pypi/v/tree-sitter-mips?logo=pypi&logoColor=ffd242)](https://pypi.org/project/tree-sitter-mips)

![Preview: syntax highlighting in NeoVim](assets/preview.png)

## Integration in NeoVim

To use `tree-sitter-mips` in NeoVim, the plugin [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) is required.

>[!IMPORTANT]
> This will **only** work on the **[master branch of nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)** and not on the **main branch**!

1. Add this to your `nvim-treesitter` config:
  ```lua
    local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
    parser_config.mips = {
        install_info = {
            url = 'https://github.com/omeyenburg/tree-sitter-mips',
            branch = 'main',
            files = { 'src/parser.c', 'src/scanner.c' },
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
        },
        filetype = { 'asm', 'vmasm' },
    }
  ```
2. Run `:TSInstall mips` to install or update the parser.
3. Copy the queries to enable highlighting. See [Adding queries](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-queries) for more information.
    <details>
    <summary>Unix</summary>

    ```sh
    mkdir -p "$XDG_CONFIG_HOME/nvim/queries/mips"
    curl -L -o "$XDG_CONFIG_HOME/nvim/queries/mips/highlights.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/highlights.scm
    curl -L -o "$XDG_CONFIG_HOME/nvim/queries/mips/indents.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/indents.scm
    ```
    </details>
    <details>
    <summary>Windows (cmd.exe)</summary>

    ```sh
    mkdir "%LOCALAPPDATA%\nvim\queries\mips"
    curl -L -o "%LOCALAPPDATA%\nvim\queries\mips\highlights.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/highlights.scm
    curl -L -o "%LOCALAPPDATA%\nvim\queries\mips\indents.scm" https://raw.githubusercontent.com/omeyenburg/tree-sitter-mips/main/queries/indents.scm
    ```
    </details>

Alternative: If you are looking for a more general grammar for assembly, check out [tree-sitter-asm](https://github.com/RubixDev/tree-sitter-asm) which supports features of other instruction sets, yet it lacks some specific features of MIPS.


## Language integration

### Javascript

Install `tree-sitter` and `tree-sitter-mips`:
```sh
npm install tree-sitter@^0.25.0 tree-sitter-mips
```
Or using `yarn` or `pnpm`:
```sh
yarn add tree-sitter@^0.25.0 tree-sitter-mips
```
`bun` can also be used to install `tree-sitter-mips` but cannot install `tree-sitter`.

<details>
<summary>Example code</summary>

```javascript
const Parser = require('tree-sitter');
const mips = require('tree-sitter-mips');

const code = "li $t0, 2";

const parser = new Parser();
parser.setLanguage(mips);

const tree = parser.parse(code);

console.log(tree.rootNode.toString());
// Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
```
</details>

### Python

Install `tree-sitter` and `tree-sitter-mips`:
```
pip install tree-sitter tree-sitter-mips
```

<details>
<summary>Example code</summary>

```py
import tree_sitter
from tree_sitter_mips import language

source = b"li $t0, 2"

parser = tree_sitter.Parser()
parser.language = tree_sitter.Language(language())
tree = parser.parse(source)

def to_string(node):
    return "(" + " ".join([node.type, *map(to_string, node.named_children)]) + ")"

print(to_string(tree.root_node))
# Output: (program (instruction (opcode) (operands (register) (decimal))))
```
</details>

### Rust

This parser works with `tree-sitter` version `0.23.0` or higher.

To use it in your project, add these dependencies to your `Cargo.toml`:
```toml
tree-sitter = "0.25.8" # or any version >= 0.23.0
tree-sitter-mips = "0.1.4"
```

<details>
<summary>Example code</summary>

```rs
use tree_sitter::Parser;

fn main() {
    let code = b"li $t0, 2";

    let mut parser = Parser::new();
    parser
        .set_language(&tree_sitter_mips::LANGUAGE.into())
        .expect("Error loading Mips parser");

    let tree = parser.parse(code, None).unwrap();

    println!("{}", tree.root_node().to_sexp());
    // Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
}
```
</details>

### Go

This parser is compatible with Go>=1.22.

To use it in your project, add these dependencies to your `go.mod`:
```gomod
require github.com/tree-sitter/go-tree-sitter v0.24.0
require github.com/omeyenburg/tree-sitter-mips v0.1.4
```

<details>
<summary>Example code</summary>

```go
package main

import (
    "fmt"

    tree_sitter "github.com/tree-sitter/go-tree-sitter"
    tree_sitter_mips "github.com/omeyenburg/tree-sitter-mips/bindings/go"
)

func main() {
    code := []byte("li $t0, 2")

    parser := tree_sitter.NewParser()
    defer parser.Close()
    parser.SetLanguage(tree_sitter.NewLanguage(tree_sitter_mips.Language()))

    tree := parser.Parse(code, nil)
    defer tree.Close()

    root := tree.RootNode()

    fmt.Println(root.ToSexp())
    // Output: (program (instruction opcode: (opcode) operands: (operands (register) (decimal))))
}
```
</details>

## Development

This grammar is best built with `tree-sitter-cli@0.24.7` (Some package managers refer to it as `tree-sitter` instead of `tree-sitter-cli`).

### Building with npm

First, install the dependencies:
```
npm install
```
This will install `tree-sitter-cli`.

Now you can generate the grammar:
```
npx tree-sitter generate
```

Test the grammar:
```
npx tree-sitter test
```

And parse files:
```
npx tree-sitter parse file.asm
```

## Further reading

- [MIPS Assembly Programmming](https://www.robertwinkler.com/projects/mips_book/mips_book.html)
- [The MIPS32 Instruction Set](https://www.cs.cornell.edu/courses/cs3410/2008fa/MIPS_Vol2.pdf)
- [MIPS Assembly Language Programmer's Guide](http://www.cs.unibo.it/~solmi/teaching/arch_2002-2003/AssemblyLanguageProgDoc.pdf)
- [MIPS Assembly/Instruction Formats](https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats)
