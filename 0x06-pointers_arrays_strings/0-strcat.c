#include "sluggy.h"

/**
 * strcat -  concatenates the string pointed to the src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */

char *strcat(char *dest, const char *src)
{
int index = 0, dest_length = 0;

while (dest[index++])
dest_length++;

for (index = 0; src[index]; index++)
dest[dest_length++] = src[index];

return (dest);
}
