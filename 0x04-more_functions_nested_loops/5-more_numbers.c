#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers ( 0 - 14)
 * _putchar only thrice
 * Return: 0 - 14 10 times
 */
void more_numers(void)
{

int i, num;

for (num = 0; num <= 9; num++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)

_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}

