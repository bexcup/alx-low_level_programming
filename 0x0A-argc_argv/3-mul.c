#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if Error, else 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		z = x * y;

		printf("%d\n", z);
		return (0);
	}
}
