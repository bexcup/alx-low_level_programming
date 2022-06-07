#include <stdio.h>
/**
 * main - compute and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x, y, z;
	int i;

	x = 0;
	y = 0;
	z = 0;

	for (i = 0; i < 1024; ++i)
	{

		if ((i % 3) == 0)
		{
			x = x + i;
		}

		else if ((i % 5) == 0)
		{
			y = y + i;
		}
	}
	z = x + y;
	printf("%d\n", z);

	return (0);
}
