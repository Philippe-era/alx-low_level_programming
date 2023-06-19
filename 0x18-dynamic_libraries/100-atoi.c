#include "main.h"

/**
 * _atoi - string to be converted
 * @s: phrase to be changed
 * Return: num to be converted
 */
int _atoi(char *s)
{
	int initial = 0, digit = 0, num = 0, last = 0, final = 0, digital = 0;
	int mod_check = 2, success = 0;
	while (s[last] != '\0')
		last++;

	while (initial < last && final == 0)
	{
		if (s[initial] == '-')
			++digit;

		if (s[initial] >= '0' && s[initial] <= '9')
		{
			digital = s[initial] - '0';
			if (digit % mod_check)
				digital = -digital;
			num = num * 10 + digital;
			final = 1;
			if (s[initial + 1] < '0' || s[initial + 1] > '9')
				break;
			final = 0;
		}
		initial++;
	}

	if (final == 0)
		return (success);

	return (num);
}

