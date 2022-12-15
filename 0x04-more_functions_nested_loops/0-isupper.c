#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: The charactere to check.
* Return: 1 if c is uppercase and 0 if otherwise
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
