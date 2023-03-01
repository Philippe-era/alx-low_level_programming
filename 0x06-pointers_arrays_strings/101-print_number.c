#include "sluggy.h"

/**
 * print_number - prints an integer
 * @n: the integer to be displayed
 */

void print_numer(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}
