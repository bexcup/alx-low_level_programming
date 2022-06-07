#include <stdio.h>
/**
 * main - Print the fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int x = 1;
	long int y = 2;
	long int z;
	long int max = 20365011074;

	for (i = 0; i < 50; i++)
	{
		if (x != max)
			printf("%ld, ", x);
		else
			printf("%ld\n", x);
		z = x + y;
		x = y;
		y = z;
	}

	return (0);
}
