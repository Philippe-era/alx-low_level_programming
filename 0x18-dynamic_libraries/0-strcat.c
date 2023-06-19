#include "main.h"
/**
 * _strcat -joins two strings together
 * @dest: destination value
 * @src: source value
 * Return: a function void
 */
char *_strcat(char *dest, char *src)
{
	int initial = 0, join = 0;
	while (dest[initial] != '\0')
	{
		initial++;
	}
	while (src[join] != '\0')
	{
		dest[initial] = src[join];
		initial++;
		join++;
	}

	dest[initial] = '\0';
	return (dest);
}

