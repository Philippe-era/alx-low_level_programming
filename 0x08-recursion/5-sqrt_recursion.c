#include "main.h"
int fin_sqrt(int num, int base);
int _sqrt_recursion(int n);
/**
* fin_sqrt - Finds the natural square
* @num: The number to find the square base of.
* @base: The base to be tested
* Return:success if natural number if not -1
*/
int fin_sqrt(int num, int base)
{
if ((base * base) == num)
return (base);
if (base == num / 2)
return (-1);
return (fin_sqrt(num, base + 1));
}
/**
* _sqrt_recursion - Returns the natural square base of a number.
* @n: The number to return the square base of.
* Return: success if natural number if not return -1
*/
int _sqrt_recursion(int n)
{
int base = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (fin_sqrt(n, base));
}
