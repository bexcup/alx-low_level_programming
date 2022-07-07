#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: The string to be printed between numbers
 * @n: Number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
		{
			printf("%s", str);
		}

		else
		{
			printf("(nil)");
		}

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}

	}

	va_end(list);

	printf("\n");
}
