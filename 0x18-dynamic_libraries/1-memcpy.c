#include "main.h"

/**
*_memcpy - memory area copied 
*@dest: memory where is stored
*@src: source value to be checked
*@n: bytes check 
*
*Return: copied memory with n byted changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int num = 0, initial = n;

	for (; num < initial; num++)
	{
		dest[num] = src[num];
		n--;
	}
	return (dest);
}
