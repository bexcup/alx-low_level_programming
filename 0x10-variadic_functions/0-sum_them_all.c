#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters
 *
 * Return: If n == 0, return 0.
 *         Otherwise, return the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int solution;

	if (n == 0)
	{
		return (0);
	}

	solution = 0;
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		solution += va_arg(nums, int);
	}

	va_end(nums);

	return (solution);
}
