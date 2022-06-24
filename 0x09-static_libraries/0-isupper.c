#include "main.h"
/**
 * _isupper - Checks for the uppercase character.
 * @c: character to be checked.
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
