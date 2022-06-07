#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int x = 1;
	int y = 1;
	int sum = 1;
	int max = 4000000;

	while (i < max)
	{
		sum = x + y;
		x = y;
		y = sum;

		if ((sum <= 4000000) && (sum % 2 == 0))
			i += sum;
	}

	printf("%d\n", i);

	return (0);
}
