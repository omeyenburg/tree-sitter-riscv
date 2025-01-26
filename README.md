# tree-sitter-mips

[Tree-sitter](https://github.com/tree-sitter/tree-sitter) grammar for the MIPS assembly language.

<img src="https://github.com/user-attachments/assets/f5f2332e-72c8-40b0-b452-98d741cada66" width="600">

## Getting started
### Building with npm
First, run `npm install` to install the `tree-sitter cli`. Next, build the grammar using `npm run build`, which generates the necessary parser files, or use it to parse a file with `npm run parse $file`.

### Building without npm
Install tree-sitter (e.g. `nix-shell -p tree-sitter`).<br>
Build the grammar using `tree-sitter generate` and parse a file with `tree-sitter parse $file`.

## Integration in Neovim
To use tree-sitter-mips in neovim, the plugin [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) is required.

Installing the lastest grammar from this repo involves the following three steps:

1. Update your Neovim config for nvim-treesitter to refer to tree-sitter-mips.
Add this to your tree-sitter config in neovim:
```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
parser_config.mips = {
  install_info = {
    url = 'https://github.com/omeyenburg/tree-sitter-mips', -- You can use a local path
    branch = 'main',
    files = { 'src/parser.c' },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = 'asm',
}
```
2. Tree-sitter should automatically install tree-sitter-mips for you when you open a `.asm` file. If not, run `:TSInstall mips` inside Neovim.
3. Copy the files from `./queries/` to the neovim config directory at `$XDG_CONFIG_HOME/nvim/queries/mips/` - see [the Adding queries section of the nvim-treesitter README](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-queries). They are required to enable highlighting.
```sh
mkdir -p $XDG_CONFIG_HOME/nvim/queries/mips/
cp ./queries/* $XDG_CONFIG_HOME/nvim/queries/mips/
```

## Alternatives
If you are looking for a more general grammar for assembly, check out [tree-sitter-asm](https://github.com/RubixDev/tree-sitter-asm) which supports features of other instruction sets, yet it lacks some specific features of MIPS.

## Ressources
https://www.cs.cornell.edu/courses/cs3410/2008fa/MIPS_Vol2.pdf
http://www.cs.unibo.it/~solmi/teaching/arch_2002-2003/AssemblyLanguageProgDoc.pdf
https://en.wikibooks.org/wiki/MIPS_Assembly/Instruction_Formats#Opcodes
