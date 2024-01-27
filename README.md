# Libft - 42 Project

## Introduction

In this repository, I have strategically merged two foundational [42-projects](https://42.fr/en/homepage/), **libft** and **GetNextLine**, to create a comprehensive toolkit for C programming. This integration stems from the recognition that both libft and GetNextLine serve as essential building blocks in numerous C-based applications. Libft lays the groundwork by providing a robust library of standard and extended C functions, offering a reliable base for various programming tasks. Complementing this, GetNextLine brings in the crucial capability of reading lines from a file descriptor, a common requirement in data processing and file manipulation. By combining these projects, I aim to offer a unified, more powerful resource that addresses basic yet critical needs in C programming. This merged repository not only streamlines development processes but also enhances the utility and applicability of these individual projects, making it a go-to solution for developers seeking well-tested, ready-to-use functions for their C projects.

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

