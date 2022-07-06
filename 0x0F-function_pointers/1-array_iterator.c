#include "function_pointers.h"
/**
 *  array_iterator - executes a function given as a parameter
 *  on each element of an array
 *  @array - the array
 *  @size - the size of the array
 *  @action - the pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action && size)
		for (x = 0; x <= (size - 1); x++)
		{
			action(array[x]);
		}
}
