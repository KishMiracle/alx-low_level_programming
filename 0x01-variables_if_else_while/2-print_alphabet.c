#include <stdlib.h>
#include <stdio.h>

/**
* main - print a to z lowercase number
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		printf("%c\n", ch);
		ch++;
	}
	return (0);
}
