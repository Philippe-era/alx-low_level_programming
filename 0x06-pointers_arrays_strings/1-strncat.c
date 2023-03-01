#include "sluggy.h"

/**
 * _strncat - concatenates two strings using input number
 * @dest: The string to be joined
 * @n : The number of bytes from src
 * @src: The string to dest
 * Return: A pointer to the resulting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_length = 0;

while (dest[index++])
dest_length++;

for (index = 0; src[index] && index < n; index++)
dest[dest_length++] = src[index];

return (dest);
}
