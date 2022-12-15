#include <stdio.h>

/**
* main - Prints the numbers from 1-100, for only multiples of three,
* for multiples of five, print Fizz instead of the number
* Return: Always 0.
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 5) == 0 && (num % 3) == 0)
			printf("FizzBuzz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
