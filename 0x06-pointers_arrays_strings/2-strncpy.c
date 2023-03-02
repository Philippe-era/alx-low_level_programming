#include "sluggy.h"

/**
 * _strncpy - concatenates two strings using input number
 * @dest: The string to be joined
 * @n : The number of bytes from src
 * @src: The string to dest
 * Return: A pointer to the resulting dest.
 */
char *_strncpy(char *dest, char *src, int n);
i{
int j = 0;

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

