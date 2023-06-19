#include "main.h"
/**
 * _strcmp - comparison of string 1 and string 2
 * @s1: string 1 to be checked
 * @s2: string 1 to be checked
 * Return: success will be returned
 */
int _strcmp(char *s1, char *s2)
{
	int success = 0, initial = 0;

	while (s1[initial] != '\0' && s2[initial] != '\0')
	{
		if (s1[initial] != s2[initial])
		{
			return (s1[initial] - s2[initial]);
		}
		initial++;
	}
	return (success);
}

