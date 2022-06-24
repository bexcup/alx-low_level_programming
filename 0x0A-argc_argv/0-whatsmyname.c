#include <stdio.h>
#include "main.h"
/**
 * main - print program name
 * @argc: argument count
 * @argv: argument vector 
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
