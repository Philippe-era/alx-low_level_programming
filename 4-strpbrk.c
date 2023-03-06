#include"main.h"
/**
 * _strpbrk - Searches a string for any of a set of byte.
 * @s: The string
 * @accept: The search
 * Return: If a set is matched - a pointer to the match
 */
char *_strpbrk(char *s, char *accept)
{
int num;
while (*s)
{
for (num = 0; accept[num]; num++)
{
if (*s == accept[num])
return (s);
}
s++;
}
return ('\0')
}
