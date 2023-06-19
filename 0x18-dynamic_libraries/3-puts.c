#include "main.h"
/**
 * _puts - displays the string
 * @str: pointer to the table
 * Return: function void created
*/


void _puts(char *str)
{
	int initial = 0;

	while (str[initial])
{
	_putchar(str[initial]);
	initial++;
}
	_putchar('\n');
}
