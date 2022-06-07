#include "main.h"
/**
*print alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Return: Always 0
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
