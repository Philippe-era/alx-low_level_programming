#include "sluggy.h"

/**
 * leet - encode a string to 1337
 * @str: The string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int index = 0, index2;
char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[index])
{
for (index2 = 0; index2 <= 7; index2++)
{
if (str[index] == leet[index2] || str[index] - 32 == leet[index2])
	str[index] = index + '0';
}
index++;
}
return (str);
}

