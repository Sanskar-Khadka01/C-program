| Keyword   | Description                          |
| --------- | ------------------------------------ |
| `int`     | Defines an integer variable type.    |
| `char`    | Defines a character variable type.   |
| `if`      | Conditionally executes statements.   |
| `else`    | Executes if the `if` condition is false. |
| `for`     | Executes a block of statements repeatedly. |
| `while`   | Loops through a block of code as long as a specified condition is true. |
| `return`  | Exits from a function and optionally returns a value. |
### 5. Assignment Operators

Assignment operators are used to assign values to variables. They include:

- **Assignment (`=`)**: Assigns the value on the right to the variable on the left.
- **Compound Assignment (`+=`, `-=`, `*=`, `/=`, etc.)**: Performs an operation on the variable and then assigns the result to the variable.

Example:
```c
int x = 10;
x += 5; // Equivalent to x = x + 5; (x becomes 15)
x -= 3; // Equivalent to x = x - 3; (x becomes 12)
x *= 2; // Equivalent to x = x * 2; (x becomes 24)
x /= 4; // Equivalent to x = x / 4; (x becomes 6)
```

### 6. Unary Operators

Unary operators operate on a single operand. They include:

- **Unary Plus (`+`)**: Indicates positive value.
- **Unary Minus (`-`)**: Negates the operand.
- **Increment (`++`)**: Increases the value of the operand by 1.
- **Decrement (`--`)**: Decreases the value of the operand by 1.

Example:
```c
int x = 10;
int y = -x; // y becomes -10
x++; // Increment x by 1 (x becomes 11)
y--; // Decrement y by 1 (y becomes -11)
```

### 7. Miscellaneous Operators

Other operators in C include:

- **Conditional Operator (`?:`)**: Provides a shorthand way of writing an `if-else` statement.
- **Comma Operator (`,`)**: Evaluates multiple expressions and returns the result of the last expression.
- **Pointer Operators (`*`, `&`, `->`)**: Used to manipulate pointers and access values indirectly.

Example:
```c
int a = 10, b = 20;
int max = (a > b) ? a : b; // max will hold the maximum of a and b
```
### 4. Bitwise Operators

Bitwise operators perform operations at the bit-level of binary representations of integers. They include:

- **Bitwise AND (`&`)**: Performs a bitwise AND operation.
- **Bitwise OR (`|`)**: Performs a bitwise OR operation.
- **Bitwise XOR (`^`)**: Performs a bitwise XOR (exclusive OR) operation.
- **Bitwise NOT (`~`)**: Performs a bitwise NOT (one's complement) operation.
- **Left Shift (`<<`)**: Shifts bits to the left.
- **Right Shift (`>>`)**: Shifts bits to the right.

Example:
```c
unsigned int a = 60; // Binary: 0011 1100
unsigned int b = 13; // Binary: 0000 1101
int result;

result = a & b;  // 12 (Binary: 0000 1100)
result = a | b;  // 61 (Binary: 0011 1101)
result = a ^ b;  // 49 (Binary: 0011 0001)
result = ~a;     // -61 (Binary: 1100 0011, assuming 8-bit)
result = a << 2; // 240 (Binary: 1111 0000)
result = a >> 2; // 15 (Binary: 0000 1111)
```