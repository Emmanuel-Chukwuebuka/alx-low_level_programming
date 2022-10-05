#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - to add numbers passed into the arguments
 * @argc: passed argument
 * @argv: vector argument that the points the argument
 * Return: zero
 */

int main(int argc; char *argv[])
{

	int a = 0, k, l;

	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l]; l++)
		{
			if (isdigit(argv[k][l]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		a += atoi(argv[k]);
	}
	printf("%d\n", a);
	return (0);
}
