#include "main.h"
/**
* print_1hr - Print the HH:MM format for one hour.
* @hour: The hour to display with its minutes.
*/
void jack_bauer(void)
{
	int a, b;

	for (i = 0; i <= 23; i++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}
	}
}
