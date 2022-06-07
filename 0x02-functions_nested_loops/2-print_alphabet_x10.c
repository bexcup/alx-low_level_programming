#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Description: Print the alphabet 10 times, in lowercase.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
