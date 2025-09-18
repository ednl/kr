/**
 * Kernighan & Ritchie - The C Programming Language, second edition
 * Exercise 1-3, page 13:
 *   Modify the temperature conversion program to print a heading
 *   above the table.
 *
 * Compile:
 *   clang -std=c99 -Wall -Wextra -pedantic -Oz 1-3.c
 *   gcc   -std=c99 -Wall -Wextra -pedantic -Oz 1-3.c
 * Incompatible with C90 or earlier due to:
 *   variable declaration in for loop
 */

#include <stdio.h>

/* Constants from fahrenheit to celsius */
#define F2C_MUL (5.0 / 9.0)
#define F2C_ADD (-32.0 * F2C_MUL)

/* Fahrenheit loop parameters */
#define FAHR_MIN  -20
#define FAHR_MAX  120
#define FAHR_STEP  10

/* From fahrenheit to celsius */
static float celsius(const int fahrenheit)
{
    return F2C_MUL * fahrenheit + F2C_ADD;
}

int main(void)
{
    puts("+-----+-------+");
    puts("|  F  |   C   |");
    puts("+-----+-------+");
    for (int t = FAHR_MIN; t <= FAHR_MAX; t += FAHR_STEP)
        printf("| %3d | %5.1f |\n", t, celsius(t));
    puts("+-----+-------+");
}
