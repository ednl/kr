/**
 * Kernighan & Ritchie - The C Programming Language, second edition
 * Exercise 1-4, page 13:
 *   Write a program to print the corresponding Celsius to Fahrenheit
 *   table.
 *
 * Compile:
 *   clang -std=c99 -Wall -Wextra -pedantic -Oz 1-4.c
 *   gcc   -std=c99 -Wall -Wextra -pedantic -Oz 1-4.c
 * Incompatible with C90 or earlier due to:
 *   variable declaration in for loop
 */

#include <stdio.h>

/* Constants from celsius to fahrenheit */
#define C2F_MUL (9.0 / 5.0)
#define C2F_ADD (32.0)

/* Celsius loop parameters */
#define CELSIUS_MIN  -20
#define CELSIUS_MAX   40
#define CELSIUS_STEP   5

/* From celsius to fahrenheit */
static double fahrenheit(const double celsius)
{
    return C2F_MUL * celsius + C2F_ADD;
}

int main(void)
{
    puts("+-----+-------+");
    puts("|  C  |   F   |");
    puts("+-----+-------+");
    for (int t = CELSIUS_MIN; t <= CELSIUS_MAX; t += CELSIUS_STEP)
        printf("| %3d | %5.1f |\n", t, fahrenheit(t));
    puts("+-----+-------+");
}
