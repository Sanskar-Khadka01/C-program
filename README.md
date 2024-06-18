<h1 align="center"> Introduction to C Programming</h1>
<p align="justify">
<img src="C_Logo.png" alt="C Programming Language" width="150" align="right">
 C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972. C is very widely used, straightforward, and can be compiled to a number of platforms and operating systems.It was created as a systems programming language to develop the UNIX operating system. C is an imperative language, with a small number of keywords and a large number of mathematical operators. C is also a very low level programming language, which means it can communicate directly with hardware. 
</p>
<p>

  # **Characteristics of C**
  PCertainly! Here are some characteristics of the C programming language:
  
  1. **Procedural Language**: C is a procedural programming language, meaning it follows a linear approach to programming, executing commands in sequence.
  
  2. **Middle-level Language**: C is often described as a "middle-level" language because it combines low-level features, allowing for direct manipulation of hardware, with high-level constructs, providing more abstraction and ease of use compared to assembly language.
  
  3. **Efficiency**: C is known for its efficiency and speed. It allows for close control over system resources and memory management, making it suitable for system programming and development of performance-critical applications.
  
  4. **Portability**: C programs can be compiled and run on various platforms with minimal changes, making it a portable language. However, platform-specific libraries and functions may require adaptation when porting code between different systems.
  
  5. **Structured Programming**: C supports structured programming concepts like functions, loops, and conditional statements, facilitating modular and organized code development.
  
  6. **Static Typing**: C is statically typed, meaning variable types are determined at compile time and cannot be changed during program execution. This allows for early error detection and optimization by the compiler.
  
  7. **Pointer Arithmetic**: C allows direct manipulation of memory addresses through pointers, offering fine-grained control over data structures and memory allocation. However, improper use of pointers can lead to bugs like segmentation faults.
  
  8. **Standard Library**: C comes with a standard library that provides various functions for tasks like input/output, string manipulation, memory allocation, and mathematical operations. These functions form the foundation of many C programs.
  
  10. **Legacy and Popularity**: C has a rich history and remains widely used today, particularly in system programming, embedded systems, and software development where performance and control are critical.
  
  11. **Close to Hardware**: C allows direct access to hardware components and system-level functionalities, making it suitable for tasks like device driver development and operating system programming.

</p>

<p>

  **Basic structure of C**
  
  1. **Preprocessor Directives**: These are lines that begin with a `#` symbol and are processed by the preprocessor before compilation. They're used to include header files or define macros.
  
     Example:
     ```c
     #include <stdio.h>
     ```
  
  2. **Main Function**: Every C program must contain a `main()` function. It's the entry point of the program where execution begins.
  
     Example:
     ```c
     int main() {
         // Program statements
         return 0;
     }
     ```
  
  3. **Variable Declarations**: Variables used in the program are declared here. It's good practice to declare variables at the beginning of the function or block.
  
     Example:
     ```c
     int num1, num2, result;
     ```
  
  4. **Executable Statements**: These are the actual instructions or commands that perform tasks within the program. They can include assignments, function calls, control structures (if-else, loops), and more.
  
     Example:
     ```c
     result = num1 + num2;
     printf("The result is: %d\n", result);
     ```
  
  5. **Function Definitions**: Apart from the `main()` function, you can define your own functions to break down the program into smaller, manageable parts.
  
     Example:
     ```c
     int add(int a, int b) {
         return a + b;
     }
     ```
  
  6. **Comments**: Comments are used to document the code for clarity and understanding. They're ignored by the compiler.
  
     Example:
     ```c
     // This is a single-line comment
     /* This is
        a multi-line
        comment */
     ```
  
  7. **Return Statement**: The `return` statement is used to exit a function and optionally return a value to the calling function. 
  
     Example:
     ```c
     return 0;
     ```

  Here's a simple example putting all these components together:
  
  ```c
  #include <stdio.h>
  
  int main() {
      int num1 = 10, num2 = 20, sum;
      
      sum = num1 + num2;
      
      printf("The sum of %d and %d is: %d\n", num1, num2, sum);
      
      return 0;s
  }
  ```
</p>
  <p>
  <h1><b>Token</b></h1>

## **keyword**: 
The reserved word that has a predefined meaning and purpose within the language's syntax. Keywords are fundamental building blocks that define the structure and behavior of programs.

| Keyword   | Description                          |
| --------- | -------------- |
| `int`     | Defines an integer variable type.    |
| `char`    | Defines a character variable type.   |
| `if`      | Conditionally executes statements.   |
| `else`    | Executes if the `if` condition is false. |
| `for`     | Executes a block of statements repeatedly. |
| `while`   | Loops through a block of code as long as a specified condition is true. |
| `return`  | Exits from a function and optionally returns a value. |

## **Opreator**:
The symbols that represent computations, operations, or manipulations of data. They are used to perform various operations on operands (variables or values). Operators in C can be classified into several types based on their functionality and usage. Here are the main types of operators in C:



### 1. Arithmetic Operators
Arithmetic operators perform basic mathematical operations on operands. They include:
#### **Table**
|perator name   |Symbols  |Description|
|---------------|---------|----------|
|Addition       |   `+`   | Adds two operands.|
|Subtraction    |   `-`   |: Subtracts first operand by the second.|
|Multiplication |   `*`   |: Multiplies two operands.|
|Division       |   `/`   | Divides the first operand by the second.|
|Modulus        |   `%`   | Computes the remainder of the division of two operands.|

Example:
```c
int a = 10, b = 3;
int sum = a + b;        // Addition
int difference = a - b; // Subtraction
int product = a * b;    // Multiplication
int quotient = a / b;   // Division
int remainder = a % b;  // Modulus
```

### 2. Relational Operators

Relational operators compare the values of two operands and return a boolean result (`true` or `false`). They include:
|Operator name            |Symbols|Description|
|-------------------------|-------|----------|
|Equal to                 |  `==` | two operands are equal.| 
|Not equal to             |  `!=` | two operands are not equal.|
|Greater than             |  `>`  | the left operand is greater than the right.|
|Less than                |  `<`  | the left operand is less than the right.|
|Greater than or equal to |  `>=` | the left operand is greater than or equal to the right.|
|Less than or equal to    |  `<=`   | the left operand is less than or equal to the right.   |

Example:
```c
int x = 10, y = 20;
if (x == y) {
    // Do something if x is equal to y
}
if (x != y) {
    // Do something if x is not equal to y
}
if (x > y) {
    // Do something if x is greater than y
}
// Similar for <, >=, and <=
```

### 3. Logical Operators

Logical operators perform logical operations on boolean expressions (`true` or `false`). They include:
|operator name|Symbol|Defination
|-----|-----|------|
|Logical AND |`&&`|Returns `true` if both operands are true.
|Logical OR |`||`|Returns `true` if at least one operand is true.
|Logical NOT |`!`|Returns `true` if the operand is false, and vice versa.

Example:
```c
int a = 1, b = 0;
if (a && b) {
    // This condition is true only if both a and b are non-zero
}
if (a || b) {
    // This condition is true if either a or b (or both) are non-zero
}
if (!b) {
    // This condition is true because b is zero
}
```
</p>