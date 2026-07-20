# Pointer Playground – README

## Aim

To demonstrate the basic concepts of pointers in C, including memory addresses, dereferencing, swapping variables using pointers, array traversal using pointers, and pointer arithmetic.

## Features

* Displays the memory address of a variable.
* Demonstrates pointer dereferencing.
* Swaps two numbers using pointers.
* Traverses an array using pointers.
* Demonstrates pointer arithmetic.

## Requirements

* C Compiler (GCC, Turbo C, Code::Blocks, Dev-C++, or Visual Studio)
* Operating System: Windows, Linux, or macOS

## How to Compile and Run

### Using GCC

```bash
gcc pointer_playground.c -o pointer_playground
./pointer_playground
```

### Using Code::Blocks or Dev-C++

1. Create a new C project.
2. Copy and paste the source code into the project.
3. Build and run the program.

## Program Overview

The program demonstrates:

1. **Memory Address** – Uses the address-of (`&`) operator to display a variable's memory location.
2. **Dereferencing** – Uses the dereference (`*`) operator to access the value stored at a memory address.
3. **Swapping** – Swaps two integer values by passing their addresses to a function.
4. **Array Traversal** – Accesses array elements using pointer notation instead of array indexing.
5. **Pointer Arithmetic** – Moves through an array using pointer increment (`ptr++`).

## Expected Output

The program displays:

* The value and memory address of a variable.
* The value obtained through pointer dereferencing.
* The values before and after swapping.
* Array elements accessed through pointers.
* Memory addresses and corresponding values while demonstrating pointer arithmetic.

## Conclusion

This program provides a basic understanding of pointer operations in C and demonstrates how pointers can be used to access memory, manipulate variables, traverse arrays, and perform pointer arithmetic efficiently.
