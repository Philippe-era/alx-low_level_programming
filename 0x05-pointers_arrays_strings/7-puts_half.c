#include "sluggy.h"

/**
 * puts_half - prints a string the a new line
 * @str: pointer to the string then points
 */

void puts_half(char *str)
{
int len, a, n;

len = 0;

while (str[len] != '\0')
{
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
len++;
}
_putchar(str[i]);
}
}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; i++)
{
_putchar(str[n + 1]);
}
}

_putchar('\n');
}
