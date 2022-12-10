#include <stdlib.h>
#include <stdio.h>

/**
* main - print a to z lowercase number
* Return: Always 0 (Success)
*/

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
