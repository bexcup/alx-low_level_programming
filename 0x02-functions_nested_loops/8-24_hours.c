#include "main.h"
/**
 * jack_bauer - Prints every minute of Jack Bauer's day
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;

	while (hours < 24)
	{
		while (min < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		min = 0;
		hours++;
	}
}
