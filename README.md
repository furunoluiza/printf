# Printf

Welcome to the repository of my "printf" project for 42 School!

## Project Description

The objective of this project is to recreate the `printf` function from the standard library in C, including the management of various specifier formats.

## How to Use

1. Clone this repository to your local machine and enter in the directory:

   ```shell
   git clone git@github.com:furunoluiza/printf.git && cd printf

2. Compile the project. You can use the provided makefile:
   
   ```
   make

4. Now you can use the ft_printf function in your C programs just like the standard printf function:
   
   ```
   #include "ft_printf.h"

   int main()
   {
    ft_printf("Hey, %s! You are %d years old.\n", "Harry", 18);
    return 0;
   }

5. Compile your printf function with the printf library file generated:
   
    ```
    cc your_main.c libftprintf.a 
