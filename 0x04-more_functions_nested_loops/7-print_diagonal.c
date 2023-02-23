#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: input number
 * Return: diagonal
 */
void print_diagonal(int n)
{
int num, num2;

if (n <= 0)
{
_putchar('\n');
}
else

for (num = 1; num <= n; num++)
{
for (num2 = 1; num2 < num ; num2++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

