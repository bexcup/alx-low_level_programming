#include "main.h"
/**
*print alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Description: Prints the alphabet with _putchar
* Return: void
*/
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
