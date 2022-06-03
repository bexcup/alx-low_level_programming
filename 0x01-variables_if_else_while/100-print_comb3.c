#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, g;

	for (f = 0; f < 9; f++)
	{
		for (g = f + 1; g < 10; g++)
		{
			putchar((f % 10) + '0');
			putchar((g % 10) + '0');

			if (f == 8 && g == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
