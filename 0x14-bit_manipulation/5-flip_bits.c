#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: The number.
 * @m: The number to flip to.
 * Return: The number of bits required to flip
 *         to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	unsigned long int num_bits;

	difference = n ^ m;
	num_bits = 0;

	while (difference > 0)
	{
		num_bits += (difference & 1);
		difference = difference >> 1;
	}

	return (num_bits);
}
