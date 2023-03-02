#include "sluggy.h"

/**
 * _strncat - concatenates two strings using input number
 * @dest: The string to be joined
 * @n : The number of bytes from src
 * @src: The string to dest
 * Return: A pointer to the resulting dest.
 */
char *_strncpy(char *dest, char *src, int n);
{
int index = 0, str_length = 0;

while (src[index++])
str_length++;

for (index = 0; src[index] && index < n; index++)
dest[index] = src[index];

for (index = str_length; index < n; index++)
dest[index] = '\0';
return (dest);
}
