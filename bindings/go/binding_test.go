package tree_sitter_sflog_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-sflog"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_sflog.Language())
	if language == nil {
		t.Errorf("Error loading Sflog grammar")
	}
}
