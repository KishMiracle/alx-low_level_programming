#include <stdio.h>
/**
* main -Entry Hex
* Return: always 0 (success)
*/
int main(void)
{
	int c = 'a';
	int d = 0;


	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
