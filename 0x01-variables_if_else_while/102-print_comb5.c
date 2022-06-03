#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	int s;
	int max = 100;

	for (r = 0; r < max ; r++)
	{
		for (s = r + 1 ; s < max ; s++)
		{
			putchar (r / 10 + '0');
			putchar (r % 10 + '0');
			putchar (' ');

			putchar (s / 10 + '0');
			putchar (s % 10 + '0');

			if (r == 98 && s == 99)
				break;

			putchar(',');
			putchar (' ');

		}

	}

	putchar('\n');

	return (0);
}
