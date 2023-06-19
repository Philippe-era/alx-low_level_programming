#include "main.h"
/**
 * _isalpha - if 1 returned success lowercase displayed
 * @c: number tested 
 * Return: success or fail
 */
int _isalpha(int c)
{
	int fail = 1, success = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (fail);
	}
	return (success);
}
