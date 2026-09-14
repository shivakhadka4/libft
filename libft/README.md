*This project has been created as part of the 42 curriculum by shkhadka.*

# Libft - The Foundation of C Programming

# Description
**Libft** is the first project at 42. The goal is to create a personal C library containing re-implementations of standard functions and additional utility functions. This library will be used in almost all future C projects during the curriculum.

The project focuses on mastering:
- Memory management (`malloc`, `free`, `bzero`)
- String manipulation
- Pointer arithmetic
- Linked lists handling


# Instructions

### Installation

Clone the repository and run `make` at the root to build the library:

- git clone
- make

This compiles all source files with `-Wall -Wextra -Werror` and creates `libft.a`.

### Compilation / Makefile Rules

- make (all) - Builds libft.a
- make clean - removes object files
- make fclean - removes libft.a and object files
- make re - full recompile

### Execution

To use in another project, include `libft.h` and link `libft.a`:

gcc your_file.c libft.a -o your_program

# Resources

The following websites and tools were used as references during development:

- Documentation & Tutorials:

W3Schools C Programming - Used for basic syntax and concept review.
https://www.w3schools.com/c/index.php

GeeksforGeeks C Programming - Used for in-depth understanding of C functions and data structures.
https://www.geeksforgeeks.org/c/c-programming-language/

- Standard Man Pages: Used to ensure parity with original libc behavior.

- AI Usage (Gemini):
Logic Support: Assisted in breaking down complex logic for functions involving multi-level pointers and memory management (e.g., ft_split and ft_lstmap).

Debugging: Used to identify potential edge cases and memory leaks during testing.

###### Compilation

The project includes a `Makefile` with the following rules:
- `make`: Compiles the mandatory functions and creates `libft.a`.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes object files and the `libft.a` archive.
- `make re`: Re-compiles the entire library from scratch.

