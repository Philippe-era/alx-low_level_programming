#include "main.h"
/**
 * print_line - function draws a straight line in the term
 * @n: input number
 * Return: staight line
 */
void print_line(int n)
{
int num;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (num = 1; num <= n; num++)
{
_putchar('_');
}
_putchar('\n');
}
}

