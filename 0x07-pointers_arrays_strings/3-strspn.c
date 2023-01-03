#include "main.h"

/**
 * _strchr - Locates the first occurance 
 * of a character in a string.
 * @s: The string.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence if case it is found
 * NULL otherwise.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, num, value, check;
	
	value = 0;
	
	for (index = 0; s[index] != '\0'; index++)
	{
		check = 0;

		for (num = 0; accept[num] != '\0'; num++)
		{
			if (accept[num] == s[index])
			{
				value++;
				check = 1;
			}
		}
		if (check == 0)
		{
			break;
		}
	}
	return (0);
}
