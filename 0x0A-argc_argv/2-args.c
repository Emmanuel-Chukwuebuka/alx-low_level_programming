#include <stdio.h>

/**
 * main - to points all the passed arguments
 * @argc: number of argument passed
 * @argv: vector argument pointing to  the strig
 */

int main(int argc, char *argv[])
{
	int k;
	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
