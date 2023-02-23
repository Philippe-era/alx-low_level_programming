#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of both width and length
 * Return: square of '#'
 */
void print_square(int size)
{

int num, num1;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (num = 1; num <= size; num++)
{
_putchar('#');
for (num1 = 2; num1 <= size; num1++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
