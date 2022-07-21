#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n:
 * @index:
 * Return: If an error occurs - -1,
 *         Else 1 if it works.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= 1 << index;

	return (1);
}
