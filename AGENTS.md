<!-- Satellite context file — extends the global hub (~/.claude/CLAUDE.md | ~/.pi/agent/AGENTS.md). Host-neutral; project-specific only. Do not duplicate hub standards here. -->

# tree-sitter-lumos

> Tree-sitter grammar for the LUMOS schema language, providing syntax highlighting for `.lumos` files across editors.

**Ecosystem context:** See [getlumos/lumos/AGENTS.md](https://github.com/getlumos/lumos/blob/main/AGENTS.md) for the LUMOS ecosystem overview, cross-repo standards, and shared guidelines.

**Status:** v0.1.0 development | 6/6 tests passing ✅

## Quick Start

```bash
npm install
tree-sitter generate    # Generate parser
npm test                # Run tests
tree-sitter parse schema.lumos  # Parse a file
```

## Key Files

- `grammar.js` - Grammar definition (120 lines)
- `queries/highlights.scm` - Syntax highlighting queries
- `test/corpus/struct.txt` - Struct test cases (3 tests)
- `test/corpus/enum.txt` - Enum test cases (3 tests)

## Grammar Coverage

**Supported:**
- Structs with fields and attributes
- Enums (unit, tuple, struct variants)
- All LUMOS types (primitives, Solana types, Vec, Option, arrays)
- Attributes: `#[solana]`, `#[account]`, `#[deprecated]`
- Line and block comments

**Design decisions:**
- Hidden type nodes (`_type`) for clean AST
- Optional trailing commas for flexibility
- Field labeling for semantic highlighting

## Testing

**Test suite:** 6 tests in `test/corpus/` (3 struct, 3 enum). Run `npm test`. All must pass before committing.

## Integration

**Used by:** nvim-lumos (Neovim plugin); future: VSCode, Emacs, Sublime Text
**Dependencies:** Tree-sitter CLI (development), Node.js/npm

## Development Workflow

1. Edit `grammar.js`
2. Run `tree-sitter generate`
3. Add tests in `test/corpus/`
4. Run `npm test`
5. Update `queries/highlights.scm` if needed
6. Commit changes

## Gotchas

- Keep `highlights.scm` synchronized with `grammar.js`
- Use hidden rules (`_prefix`) for internal types
- Don't modify auto-generated `src/` files
- Optional trailing commas (don't enforce strict comma requirements)