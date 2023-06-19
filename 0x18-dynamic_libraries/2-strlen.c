#include "main.h"
/**
 * _strlen - number of letters in ohrase
 * @s: phrase to be examined
 * Return: success_Check to be returned
 */
int _strlen(char *s)
{
	int success_check = 0;

	while (*s != '\0')
	{
		success_check++;
		s++;
	}

	return (success_check);
}
