# Libft

Libft is a custom library written in C as part of the 42 London curriculum. It replicates a selection of standard C library functions and introduces additional functionality for handling linked lists. The project is designed to reinforce understanding of memory allocation, string manipulation, and data structures.

---

## Table of Contents
1. [Introduction](#introduction)
2. [Mandatory Functions](#mandatory-functions)
3. [Bonus Functions](#bonus-functions)
4. [Usage](#usage)
5. [Compilation](#compilation)
6. [License](#license)

---

## Introduction

The **Libft** project involves recreating functions from the standard C library (`libc`) as well as implementing additional utility functions. It is divided into two parts:
- **Mandatory Part**: Reimplement common standard C functions.
- **Bonus Part**: Create a set of functions to manipulate linked lists.

This library can be reused in future 42 projects.

---

## Mandatory Functions

### Standard C Library Replications

The following functions are implemented in the mandatory part of the project:

| Function Name | Description |
|---------------|-------------|
| `isalpha`     | Checks if a character is alphabetic. |
| `isdigit`     | Checks if a character is a digit. |
| `isalnum`     | Checks if a character is alphanumeric. |
| `isascii`     | Checks if a character is an ASCII character. |
| `isprint`     | Checks if a character is printable. |
| `strlen`      | Returns the length of a string. |
| `memset`      | Fills memory with a constant byte. |
| `bzero`       | Zeros out a block of memory. |
| `memcpy`      | Copies memory from one location to another. |
| `memmove`     | Copies memory, handling overlapping regions safely. |
| `strlcpy`     | Copies a string with size limiting. |
| `strlcat`     | Concatenates two strings with size limiting. |
| `toupper`     | Converts a character to uppercase. |
| `tolower`     | Converts a character to lowercase. |
| `strchr`      | Locates the first occurrence of a character in a string. |
| `strrchr`     | Locates the last occurrence of a character in a string. |
| `strncmp`     | Compares two strings up to a specified number of characters. |
| `memchr`      | Searches memory for a specific byte. |
| `memcmp`      | Compares two blocks of memory. |
| `strnstr`     | Locates a substring within a string, up to a given length. |
| `atoi`        | Converts a string to an integer. |

### Additional Memory Management Functions

These functions use `malloc` for dynamic memory allocation:

| Function Name | Description |
|---------------|-------------|
| `calloc`      | Allocates and zeroes out memory. |
| `strdup`      | Duplicates a string by allocating memory for the copy. |

---

## Bonus Functions

In the bonus part of the project, the following linked list functions were implemented:

| Function Name      | Description |
|--------------------|-------------|
| `ft_lstnew`        | Creates a new node with a given content. |
| `ft_lstadd_front`  | Adds a new node at the beginning of a list. |
| `ft_lstsize`       | Counts the number of nodes in a list. |
| `ft_lstlast`       | Returns the last node in a list. |
| `ft_lstadd_back`   | Adds a new node at the end of a list. |
| `ft_lstdelone`     | Deletes a node and frees its content. |
| `ft_lstclear`      | Deletes and frees a list and its contents. |
| `ft_lstiter`       | Iterates through a list, applying a function to each node's content. |
| `ft_lstmap`        | Creates a new list by applying a function to each node's content. |

---

## Usage

### Include the Library
To use **Libft**, include its header file in your C program:
```c
#include "libft.h"
```

### Example Usage

To demonstrate how to use some of the functions implemented in **Libft**, you can write a simple program like the following:
```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Example: Using ft_strlen to find the length of a string
    char *str = "Hello, Libft!";
    size_t length = ft_strlen(str);
    printf("Length of string: %zu\n", length);

    // Example: Creating a linked list node using ft_lstnew
    t_list *node = ft_lstnew("Node content");
    if (node)
        printf("Node content: %s\n", (char *)node->content);

    return 0;
}
```
Compile and run this program with:

`
gcc -o test_program test_program.c -L. -lft
`
`
./test_program
`

---

## Compilation

To build the **Libft** library, follow these steps:

1. Run the `make` command in the project directory:
   ```bash
   make
   ```

3. This will create a static library file named `libft.a`.

4. To clean up the object files, use:
    ```bash
   make clean
    ```

6. To remove all compiled files, including `libft.a`, use:
    ```bash
   make fclean
    ```

8. To recompile everything from scratch, use:
    ```bash
   make re
    ```

---

## Integration

To integrate **Libft** into your project:

1. Include the `libft.h` header file in your source files:
    ```c
   #include "libft.h"
    ```

3. Link the `libft.a` static library during compilation:
   ```bash
   gcc -o your_program your_program.c -L. -lft
   ```

5. Ensure the `libft.a` file is in the same directory or adjust the `-L` path accordingly.

---

## Testing

You can write your own test files to verify the behavior of the library functions. For example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // Testing ft_atoi
    char *num_str = "42";
    int num = ft_atoi(num_str);
    printf("String '%s' converted to integer: %d\n", num_str, num);

    // Testing ft_memset
    char buffer[10];
    ft_memset(buffer, 'A', sizeof(buffer) - 1);
    buffer[9] = '\0';
    printf("Buffer after memset: %s\n", buffer);

    return 0;
}
```

Compile and run this file as described in the [Compilation](#compilation) section.

---

## License

This project is part of the 42 curriculum and is intended for educational purposes. You are free to use, modify, and share the code for learning and personal projects. Attribution to the author is appreciated but not required.

---

**Happy coding and good luck with your 42 journey! 🚀**
