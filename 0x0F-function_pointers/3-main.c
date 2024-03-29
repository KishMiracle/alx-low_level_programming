#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *  Return: solution of the operation
 */
int main(int argc, char *argv[])
{
	int a, b;
	/*char op;*/
	int (*operation)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*if (argv[2][1])*/
	if ((argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%') && argv[2][1] == '\0')
	{
		b = atoi(argv[3]);
		a = atoi(argv[1]);
		/*operation.op = &op;*/
		operation = get_op_func(argv[2]);
		if (operation == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", operation(a, b));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
