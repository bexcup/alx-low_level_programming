#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: The pointer to the bit.
 * @index: The index to set the value of the indices.
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
