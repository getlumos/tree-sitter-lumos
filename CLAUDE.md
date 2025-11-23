# CLAUDE.md - tree-sitter-lumos

**Repository:** https://github.com/getlumos/tree-sitter-lumos
**Ecosystem:** Part of LUMOS language tooling
**For ecosystem context:** See [lumos/CLAUDE.md](https://github.com/getlumos/lumos/blob/main/CLAUDE.md)

---

## What is tree-sitter-lumos?

Tree-sitter grammar for LUMOS schema language, providing syntax highlighting for `.lumos` files across editors.

**Status:** v0.1.0 development | 6/6 tests passing ✅

---

## Quick Start

```bash
# Install dependencies
npm install

# Generate parser
tree-sitter generate

# Run tests
npm test

# Parse a file
tree-sitter parse schema.lumos
```

---

## Key Files

- `grammar.js` - Grammar definition (120 lines)
- `queries/highlights.scm` - Syntax highlighting queries
- `test/corpus/struct.txt` - Struct test cases (3 tests)
- `test/corpus/enum.txt` - Enum test cases (3 tests)

---

## Grammar Coverage

**Supported:**
- Structs with fields and attributes
- Enums (unit, tuple, struct variants)
- All LUMOS types (primitives, Solana types, Vec, Option, arrays)
- Attributes: `#[solana]`, `#[account]`, `#[deprecated]`
- Line and block comments

**Design Decisions:**
- Hidden type nodes (`_type`) for clean AST
- Optional trailing commas for flexibility
- Field labeling for semantic highlighting

---

## Testing

**Test Suite:** 6 tests in `test/corpus/`
- 3 struct tests
- 3 enum tests

**Run Tests:**
```bash
npm test
```

All tests must pass before committing.

---

## Integration

**Used By:**
- nvim-lumos (Neovim plugin)
- Future: VSCode, Emacs, Sublime Text

**Dependencies:**
- Tree-sitter CLI (development)
- Node.js/npm

---

## Development Workflow

1. Edit `grammar.js`
2. Run `tree-sitter generate`
3. Add tests in `test/corpus/`
4. Run `npm test`
5. Update `queries/highlights.scm` if needed
6. Commit changes

---

## AI Assistant Guidelines

**✅ DO:**
- Run `npm test` after grammar changes
- Keep highlights.scm synchronized with grammar.js
- Use hidden rules (`_prefix`) for internal types

**❌ DON'T:**
- Skip tests
- Modify auto-generated `src/` files
- Use strict comma requirements

---

**Last Updated:** 2025-11-23
**Full ecosystem docs:** [lumos/CLAUDE.md](https://github.com/getlumos/lumos/blob/main/CLAUDE.md)
