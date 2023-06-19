#include "main.h"

/**
 * _strstr - Entrance point to be checked and analyzed
 * @haystack: haystack input to be checked
 * @needle: needle input to be checked
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *last_needle = haystack;
		char *point_needle = needle;

		while (*last_needle == *point_needle && *point_needle != '\0')
		{
			last_needle++;
			point_needle++;
		}
		if (*point_needle == '\0')
			return (haystack);
	}
	return (0);
}
