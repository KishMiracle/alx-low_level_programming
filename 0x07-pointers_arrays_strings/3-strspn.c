#include "main.h"

/**
 * _strchr - Locates the first occurance
 * of a character in a string.
 * @s: The string.
 * @accept: pointer to search prefix phrase
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int index, num, value, check;

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
