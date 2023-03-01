#include "sluggy.h"

/**
 * add_strings - adds the numbrs stored in two strings
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r_index: the current index
 * @r: the buffer to store
 * infinite_add - adds two numbers
 *
 * Return: result
 */


char *add_strings(char *n1, char *n2, char *r, int r_index);


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int num, num2 = 0;

for (; *n1 && *n2; n1 --, n2--, r_index)
{
num = (*n1 - '0') + (*n2 - '0');
num += num2;
*(r + r_index) = (num % 10) + '0';
num2 = num / 10;
}

for (; *n2; n2--, r_index--)
{
num = (*n2 - '0') + num2;
*(r + r_index) = (num % 10) + '0';
num2 = num / 10;
}

if (num2 && r_index >= 0)
{
*(r + r_index) = (num2 % 10) + '0';
return (r + r_index);
}
else if (num2 && r_index < 0)
return (0);

return (r + r_index + 1);
}
