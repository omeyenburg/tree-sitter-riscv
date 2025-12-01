package tree_sitter_riscv_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_riscv "github.com/omeyenburg/tree-sitter-riscv/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_riscv.Language())
	if language == nil {
		t.Errorf("Error loading RISC-V grammar")
	}
}
