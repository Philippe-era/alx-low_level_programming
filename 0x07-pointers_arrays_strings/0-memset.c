#include "main.h"
#include <stdio.h>
/**
 * _memset - Fills the fill n bytes of the memory area
 * @s: a pointer to the memory filled
 * @c: The character filled
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory.
 */
void *_memset(void *s, int c, size_t n)
{
unsigned int index;
unsigned char *memory = s, value = c;

for (index = 0; index < n; index++)
memory[index] = value;
return (memory);
}

