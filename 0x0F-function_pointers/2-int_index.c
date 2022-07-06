#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: the  pointer to the function to be used
 *        to compare values
 *
 * Return: If no elements matches or if size <= 0, return -1.
 *         Otherwise return  the index of the first element,
 *         for which the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
