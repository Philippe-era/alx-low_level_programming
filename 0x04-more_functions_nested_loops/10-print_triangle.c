#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'
 */
void print_triangle(int size)
{
int num, num1, num2;
if (size <= 0)
{
_putchar('\n');
}

else
{
for (num = 0; num <= (size - 1); num++)
{
for (num1 = 0; num1 < (size - 1) - num; num1++)
{
_putchar(' ');
}
for (num2 = 0; num2 <= num; num2++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
