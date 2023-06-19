#include "main.h"

/**
 * char *_strcpy - function that copies strings 
 * @dest: destination to be checkd
 * @src: source to be checked
 * Return: dest string will be realised
 */
char *_strcpy(char *dest, char *src)
{
	int last = 0;
	int num = 0;

	while (*(src + last) != '\0')
	{
		last++;
	}
	for (int num = 0; num < last ; num++)
	{
		dest[num] = src[num];
	}
	dest[last] = '\0';
	return (dest);
}

