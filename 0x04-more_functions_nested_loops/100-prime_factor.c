#include <stdio.h>
/**
 * main - print the largest prime number
 * Return: Always
 */
int main(void)
{
long prime = 612852475143, divide;
while (divide < (prime / 2))
{
if (prime % 2) == 0)
{
prime /= 2;
continue;
}
for (divide = 3; divide < (prime / 2); divide += 2)
{
if ((prime % divide) == 0)
prime /= divide;
}
}
printf("%ld\n", prime);
return (0);
}

