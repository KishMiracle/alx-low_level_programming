#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* imain -Entry Hex
* Return: always 0 (success)
*/

int main(void)
{

	int s1;
	int s2;

	s1 = 0;
	s2 = 1;

	if (s1 < s2)
	{
		putchar(s1);
		putchar(s2);
	}
	if (s2 < s1)
	{
		putchar(s2);
		putchar(s1);
	}
	putchar('\n');
	return (0);
}
