
---
<div align="center">
This project was created as part of my studies at  <a href="https://www.42lisboa.com" target="_blank">42 Lisboa</a>
<br>
<br>
An overview of all the projects I completed at 42 can be found here: <a href="https://github.com/ahokcool/ahokcool/blob/main/README.md" target="_blank">ahokcool</a>
</div>

---

# libft-gnl-printf
In this repository, I have strategically merged the three foundational 42 projects:
- libft
- get_next_line (gnl)
- ft_printf

This integration aims to leverage the strengths of these projects, which are designed to be used together for various C programming tasks. I use this repo in the following projects:
- [fdf](https://github.com/ahokcool/fdf)
- [push_swap](https://github.com/ahokcool/push_swap)
- [minitalk](https://github.com/ahokcool/minitalk)
- [minishell](https://github.com/ahokcool/frankenshell)
- [cub3D](https://github.com/ahokcool/cub3D)

## Introduction
The combined repository offers a comprehensive toolkit for C programming, providing a robust library of standard and extended C functions, as well as the capability to read lines from file descriptors.

**Libft** lays the groundwork by providing a robust library of standard and extended C functions, offering a reliable base for various programming tasks.

Complementing this, **GetNextLine** brings in the crucial capability of reading lines from a file descriptor, a common requirement in data processing and file manipulation.

Finally, **ft_printf** adds the capability to format and print data to the standard output, a crucial feature for debugging and user interaction.




### libft

Libft is my first 42 School project. This project aims to build on the concepts learned during the 42 Piscine and serves as an opportunity to create my own C library, replicating some standard C library functions as well as adding some additional useful functions.

#### Features
- A collection of C functions that are often used in various 42 projects.
- Functions include a mix of standard C library functions and additional utility functions.
- Easy to compile and integrate into other 42 projects.





### get next line

GetNextLine objectives are to develop a function that reads a line ending with a newline character from a file descriptor. This project is not only about learning how to use static variables in C but also about deepening my understanding of file operations, memory allocation, and data processing in C programming.


#### Features
- Efficiently reads a line from a file or standard input until a newline character is encountered.
- Handles multiple file descriptors simultaneously.
- Designed to be reusable and easy to integrate into larger projects, enhancing my `libft` project with additional functionality.






### ft_printf

The ft_printf project aims to replicate the standard printf function in C, providing the capability to format and print data to the standard output. This project is an opportunity to learn about variadic functions, parsing, and formatting data in C programming.

#### Features
- Replicates the standard printf function in C.


<!-- Links


## Getting Started

### Prerequisites
- A C-compiler like `cc` or `gcc`
- Make (optional, for using the Makefile)

### Installation
1. Clone this repository
2. Change to the libft directory
3. Compile the library (`make`)

This will create a `libft.a` library file which you can include in your C projects.

## Usage
Include `libft.h` in your C project and compile with the `libft.a` library file.

Compile your project with:
`cc your_project.c -L. -lft -o your_project`

**Example**
```
#include "libft.h"
#include <unistd.h>

int main()
{
 ft_putstr_fd("42 is awesome!", STDOUT_FILENO);
 return 0;
}
```

Checkout my other 42 projects at [my 42 profile](https://github.com/ahokcool/42_common_core) where I used this library. :) 

 -->
