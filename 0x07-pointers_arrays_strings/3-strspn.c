#include "main.h"

/**
 * _strchr - Locates the first occurance 
 * of a character in a string.
 * @s: The string.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence if case it is found
 * NULL otherwise.
 */

char *_strchr(char *s, char c)
{
	int index = 0;
	char tmp;
	char *res = 0;

	do {
		tmp = s[index];
		if (tmp == c)
			res = s + index;
		index++;
	} while (res == 0 && tmp != '\0');
	return (res);
}
