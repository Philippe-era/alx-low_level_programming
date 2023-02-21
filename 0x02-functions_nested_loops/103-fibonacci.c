#include <stdio.h>

/**
 * main - main block
 * Description: prints even number < 4000000
 * 5 below 1024 exluded
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

while (next < 4000000)
{
	next = a + b;
	a = b;
	b = next;
	if (next % 2 == 0)
		sum += next;
}
printf("%d\n", sum);
return (0);
}
