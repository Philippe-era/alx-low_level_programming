#include "main.h"

/**
 * str_len_recursion - size
 * @s: pointer to string
 * Return: recursion
 */
int str_len_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + str_len_recursion(++s));
}

/**
 * pali - palidrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int pali(char *s, int l)
{
if (l < 1)
{
return (1);
}

if (*s == *(s + l))
{
return (pali(s + 1, l - 2));
}
return (0);
}

/**
 * is_palindrome - palidrome
 * @s: pointer to a string
 * Return: recursion
 */
int is_palindrome(char *s)
{
int length = str_len_recursion(s);

return (pali(s, length - 1));
}
