#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int y;
	int x;

	while (i < 10)
	{
		x = 0;
		while (x < 10)
		{
			y = 0;
			while (y < 10)
			{
				if (y != x && x != i && i < x && x < y)
				{
					putchar('0' + i);
					putchar('0' + x);
					putchar('0' + y);

					if (y + x + i != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				y++;
			}
			x++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
