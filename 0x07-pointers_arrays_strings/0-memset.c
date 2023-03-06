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
unsigned int num;
unsigned char *storage = s, value = c;

for (num = 0; num < n; num++)
storage[num] = value;
return (storage);
}

