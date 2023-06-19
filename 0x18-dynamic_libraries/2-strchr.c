#include "main.h"

/**
* _strchr - entrance to be evulated
* @s: number s to be checked
* @c: number c to be checked
* Return: Success on 0
*/

char *_strchr(char *s, char c)
{
	int initial = 0;

	for (; s[initial] >= '\0'; initial++)
	{
		if (s[initial] == c)
			return (&s[initial]);
	}
	return (0);
}

