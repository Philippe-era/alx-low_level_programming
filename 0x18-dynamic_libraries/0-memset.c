#include "main.h"

/**
* _memset - memory block filled with it
* @s: address starting
* @b: the outcome value
* @n: changed array bytes
* Return: new array
*/

char *_memset(char *s, char b, unsigned int n)
{
	

	for (int initial = 0; n > 0; initial++)
	{
		s[initial] = b;
		n--;
	}
	return (s);
}
