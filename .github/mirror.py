#!/usr/bin/env python3
"""
Mirror script: Sync tree-sitter-riscv to tree-sitter-mips with substitutions.
"""

from pathlib import Path
import re

RISCV_REPO = Path("riscv-repo")
MIPS_REPO = Path("mips-repo")

# Files/dirs to exclude from mirroring
EXCLUDE_PATHS = {
    ".git/*",
    ".github/*",
    "README.md",
    "assets/*",
    "build/*",
    "dist/*",
    "node_modules/*",
}

# Special files to mirror
INCLUDE_PATHS = {".github/workflows/publish.yml"}

# Case-sensitive substitutions
SUBSTITUTIONS = [
    ("RISC-V", "MIPS"),
    ("RISCV", "MIPS"),
    ("Risc-V", "Mips"),
    ("RiscV", "Mips"),
    ("Riscv", "Mips"),
    ("risc-v", "mips"),
    ("riscv", "mips"),
]


def should_include(path: Path) -> bool:
    rel = str(path.relative_to(RISCV_REPO))

    for include_path in INCLUDE_PATHS:
        if re.match(include_path, rel):
            return True

    for exclude_path in EXCLUDE_PATHS:
        if re.match(exclude_path, rel):
            return False

    return True


def substitute(content: str) -> str:
    for old, new in SUBSTITUTIONS:
        content = content.replace(old, new, -1)

    return content


def main():
    # Create initial file list
    file_list = []
    for item in RISCV_REPO.rglob("*"):
        if item.is_file() and should_include(item):
            file_list.append(item)

    # Mirror files
    for src_file in file_list:
        rel_path = src_file.relative_to(RISCV_REPO)
        dst_file = MIPS_REPO / substitute(str(rel_path))

        # Create parent directories
        dst_file.parent.mkdir(parents=True, exist_ok=True)

        try:
            with open(src_file, "r", encoding="utf-8") as f:
                content = f.read()

            content = substitute(content)

            with open(dst_file, "w", encoding="utf-8") as f:
                f.write(content)

            print(f"Copied: {rel_path}")
        except Exception as e:
            print(f"Skipped: {rel_path} ({e})")

    print("Mirroring complete!")


if __name__ == "__main__":
    main()
