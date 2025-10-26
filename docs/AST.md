# AST Reference

Complete reference of all node types produced by tree-sitter-mips.

## Node Types

### Instructions

#### `instruction`
```scheme
(instruction
  opcode: (opcode)
  operands: (operands ...))
```

#### `operands`
List of instruction operands.

**Example:** `add $t0, $t1, $t2`
```scheme
(operands
  (register "$t0")
  (register "$t1")
  (register "$t2"))
```

### Directives

#### `directive`
```scheme
(directive
  mnemonic: (macro_mnemonic | integer_mnemonic | ...)
  operands: (operands ...))
```

### Expressions

#### `binary_expression`
```scheme
(binary_expression
  left: (...)
  operator: (additive_operator | multiplicative_operator | ...)
  right: (...))
```

**Operators:** `additive_operator`, `multiplicative_operator`, `equality_operator`, `relational_operator`, `shift_operator`, `logical_or_operator`, `logical_and_operator`, `bitwise_or_operator`, `bitwise_xor_operator`, `bitwise_and_operator`, `modulo_operator`, `assignment_operator`

#### `unary_expression`
```scheme
(unary_expression
  operator: (unary_minus_operator | bitwise_not_operator | logical_not_operator)
  argument: (...))
```

#### `parenthesized_expression`
```scheme
(parenthesized_expression
  argument: (...))
```

#### `relocation_expression`
```scheme
(relocation_expression
  type: (relocation_type)
  argument: (symbol))
```

### Addresses

#### `address`
```scheme
(address
  offset: (...)
  base: (register))
```

**Example:** `4($sp)`
```scheme
(address
  offset: (decimal "4")
  base: (register "$sp"))
```

### Data Types

- `decimal` - e.g., `42`
- `hexadecimal` - e.g., `0x2a`
- `octal` - e.g., `052`
- `binary` - e.g., `0b101010`
- `char` - e.g., `'a'`
- `string` - e.g., `"hello"`
- `float` - e.g., `3.14`

### Symbols & Registers

- `register` - e.g., `$t0`, `$sp`
- `symbol` - e.g., `main`, `my_function`
- `macro_variable` - e.g., `%foo`, `$bar`, `\baz`
- `global_label` - e.g., `main:`
- `local_label` - e.g., `.L123:`
- `local_label_reference` - e.g., `.L123`

### Comments

- `line_comment` - `# comment` or `// comment`
- `block_comment` - `/* comment */`
- `preprocessor` - `.include`, `.define`, etc.

## Field Reference

| Field            | Used In                                                                 | Description          |
| ---------------- | ----------------------------------------------------------------------- | -------------------- |
| `opcode`         | `instruction`                                                           | Instruction mnemonic |
| `operands`       | `instruction`, `directive`                                              | Operand list         |
| `left`, `right`  | `binary_expression`                                                     | Binary operands      |
| `operator`       | `binary_expression`, `unary_expression`                                 | Operator token       |
| `argument`       | `unary_expression`, `parenthesized_expression`, `relocation_expression` | Single operand       |
| `base`, `offset` | `address`                                                               | Address components   |
| `type`           | `relocation_expression`                                                 | Relocation type      |
| `mnemonic`       | `directive`                                                             | Directive type       |
| `name`           | `directive`                                                             | Macro name           |
| `parameters`     | `directive`                                                             | Macro parameters     |
| `string`         | `directive`                                                             | String value         |

## Examples

### Simple Instruction
```asm
add $t0, $t1, $t2
```

```scheme
(program
  (instruction
    opcode: (opcode)
    operands: (operands
      (register) (register) (register))))
```

### Instruction with Expression
```asm
li $t0, 4 + 5 * 2
```

```scheme
(program
  (instruction
    opcode: (opcode)
    operands: (operands
      (register)
      (binary_expression
        left: (decimal "4")
        operator: (additive_operator "+")
        right: (binary_expression
          left: (decimal "5")
          operator: (multiplicative_operator "*")
          right: (decimal "2"))))))
```

### Address Expression
```asm
lw $t0, 4($sp)
```

```scheme
(program
  (instruction
    opcode: (opcode)
    operands: (operands
      (register)
      (address
        offset: (decimal "4")
        base: (register "$sp")))))
```

### Unary Expression
```asm
addi $t0, $zero, -42
```

```scheme
(program
  (instruction
    opcode: (opcode)
    operands: (operands
      (register)
      (register)
      (unary_expression
        operator: (unary_minus_operator "-")
        argument: (decimal "42")))))
```

### Directive
```asm
.word 42
```

```scheme
(program
  (directive
    mnemonic: (integer_mnemonic ".word")
    operands: (integer_operands (decimal "42"))))
```
