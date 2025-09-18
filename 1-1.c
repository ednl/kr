/**
 * Kernighan & Ritchie - The C Programming Language, second edition
 * Exercise 1-23, page 8:
 *   Run the "hello, world" program on your system. Experiment with leaving
 *   out parts of the program, to see what error messages you get.
 *
 * Compile:
 *   clang -ansi -Wall -Wextra -pedantic -Oz 1-1.c
 *   gcc   -ansi -Wall -Wextra -pedantic -Oz 1-1.c
 */

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
