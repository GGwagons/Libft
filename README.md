# Libft - Your First C Library

Welcome to my **Libft** project! This repository contains my custom implementation of standard C library functions and additional utility functions. The project is a core part of the curriculum in learning the C programming language, and it's designed to help build a foundation of essential functions that will be useful in future projects.

## Introduction

**Libft** is all about creating your own C library that reimplements key standard library functions from scratch. The goal is to gain a deeper understanding of these functions by coding them manually and ensuring their robustness. This library will serve as a valuable tool in future school assignments, and you are encouraged to expand it throughout the year.

## Common Instructions

- All code is written in C, adhering to the **Norm** guidelines.
- Functions must handle errors like segmentation faults or double free appropriately. Any such errors will result in a failing grade.
- Heap-allocated memory must be freed to avoid memory leaks.
- If the project requires it, a `Makefile` is included with the following rules:
  - `all`: Compiles the library.
  - `clean`: Removes object files.
  - `fclean`: Removes object files and the library.
  - `re`: Recompiles everything.
- Bonus rules are included if bonus functionality is implemented.
- Only files inside the repository will be evaluated.

## Mandatory Part

### Part 1: Libc Functions

In this section, I have reimplemented a set of standard C library functions. Each function follows the behavior defined in its respective **man** page, but with the prefix `ft_`. For example, `strlen` becomes `ft_strlen`.

Here are some of the reimplemented functions:

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_strlen`
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_atoi`
  
Additionally, the following functions use `malloc()` to handle dynamic memory:

- `ft_calloc`
- `ft_strdup`

### Part 2: Additional Functions

This section includes non-standard C functions or modifications of existing ones. These functions provide additional utility:

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Concatenates two strings.
- `ft_strtrim`: Trims characters from the start and end of a string.
- `ft_split`: Splits a string based on a delimiter.
- `ft_itoa`: Converts an integer to a string.
- `ft_strmapi`: Applies a function to each character of a string, creating a new string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Outputs data to a given file descriptor.
