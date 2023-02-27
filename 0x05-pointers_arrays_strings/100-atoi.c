#include "sluggy.h"


/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{

int i = 0, n = 0, sigma = 1;

while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
{
if (s[i] == '-')
sigma *= -1;
i++;
}
while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
{
if (n >= 0)
{
n = n * 10 - (s[i] - '0');
i++;
}
else
{
n = n * 10 - (s[i] - '0');
}
}
sigma *= -1;
return (n *sigma);
}

