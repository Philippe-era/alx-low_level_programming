#include "main.h"
int is_prime_number(int n);
int is_divisible(int num, int increase);
/**
 * is_divisible - recurion function checks if num is divisible
 * @num: number we checking
 * @increase: number we iterate
 * Return: retrn 1 or 0
 */
int is_divisible(int num, int increase)
{
if (increase == num - 1)
{
return (1);
}

else if (num % increase == 0)
{
return (0);
}

if (num % increase != 0)
{
return (is_divisible(num, increase + 1));
}
/**
 * is_prime_number - checks if prime number or not
 * @num: number
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int num)
{

int increase;

increase = 2;

if (num < 2)
{
return (0);
}
if (num == 2)
{
return (1);
}

return (is_divisible(num, increase));
}
