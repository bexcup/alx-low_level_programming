#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bit
 * @index: The index to get the value at - indices starting at 0.
 * Return: The value of the bit at index index,
 *         or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = n;

	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);

	i >>= index;

	if ((i & 1) == 1)
		return (1);

	else
		return (0);
}
