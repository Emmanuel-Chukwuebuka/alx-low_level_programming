#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: argument passed
 * @argv: vector argument passed too the pointer
 * Return: zero
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
