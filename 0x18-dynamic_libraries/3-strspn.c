#include "main.h"

/**
 * _strspn - entrance point to be anlaysed
 * @s: string input
 * @accept: accepts input
 * Return: success always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int check;

	while (*s)
	{
		for (check = 0; accept[check]; check++)
		{
			if (*s == accept[check])
			{
				num++;
				break;
			}
			else if (accept[check + 1] == '\0')
				return (num);
		}
		s++;
	}
	return (num);
}
