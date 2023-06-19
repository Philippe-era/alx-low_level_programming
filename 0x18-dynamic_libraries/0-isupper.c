#include "main.h"

/**
* _isupper - apital letters check
* @c: what we looking for 
* Return: Suceess returns 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

