#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *r = s;

	while (*(r + 1) != '\0')
	{
		r++;
	}

	while (r > s)
	{
		char x = *r;
		*r-- = *s;
		*s++ = x;
	}
}
