#include "main.h"

/**
 * _strpbrk - check point to be analyzed
 * @s: num check
 * @accept: num to be checked
 * Return: Success checked if value returned corrcetly
 */

char *_strpbrk(char *s, char *accept)
{
	int check;

	while (*s)
	{
		for (check = 0; accept[check]; check++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
