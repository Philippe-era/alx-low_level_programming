#include "main.h"

/**
 *_islower - lower case checkek
 *@c: checked letter to be displayed
 * Return: Success always 
 */

int _islower(int c)
{
	int fail = 1, success = 0;
	if  (c >= 97 && c <= 122)
		return (fail);
	else
		return (success);

}
