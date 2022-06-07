#include "main.h"
/**
*print alphabet - prints the alphabet, in lowercase, followed by a new line.
*Description: Prints the alphabet with _putchar
*Return: void
*/
void print_alphabet(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
