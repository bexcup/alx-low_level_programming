#include "main.h"
/**
 * print_number - print an integer
 * @n - integer to be printed
 */
void print_number(int n)
{
	unsigned int x, y, z;

	if (n >= 0)
	{
		x = n;
	}
	else
	{
		_putchar('-');
		x = n * -1;
	}

	y = x;
	z = 1;

	while (y > 9)
	{
		y /= 10;
		z *= 10; 
	}

	for (; z >= 1; z /=10)
	_putchar(((x / z) % 10) + '0');
}
