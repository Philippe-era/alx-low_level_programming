#include <stdlib.h>
#include "main.h"
/**
* argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to the new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, p, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
		return (NULL);

	p = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[p] = av[i][j];
			p++;
		}
		str[p] = '\n';
		p++;
	}
	return (str);
}
