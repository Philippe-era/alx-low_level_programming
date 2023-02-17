#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	for ( ; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
