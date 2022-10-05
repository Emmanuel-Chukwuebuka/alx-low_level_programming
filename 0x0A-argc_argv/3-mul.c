#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints two numbers passed into the argument
 * @argc: contains argument input
 * @argv: stores the string
 */

int main(int argc, char *argv[])
{
	int num1, num2, multiply;

	if (arg != 3)
		printf("Erroe\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		multiply = num1 * num2;
		printf("%d\n", multiply);
	}
	return (0);
}
