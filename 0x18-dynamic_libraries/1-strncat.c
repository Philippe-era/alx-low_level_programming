#include "main.h"
/**
 * _strncat - joins two strings
 * @dest: destination variable
 * @src: source variable to be checked
 * @n: inputted a value
 * Return: destination address
 */
char *_strncat(char *dest, char *src, int n)
{
	int initial = 0, join = 0;

	while (dest[initial] != '\0')
	{
		initial++;
	}
	while (join < n && src[join] != '\0')
	{
	dest[initial] = src[join];
	initial++;
	join++;
	}
	dest[initial] = '\0';
	return (dest);
}

