#include "main.h"
/**
 * creates_file - Creates a file.
 * @filename: The files name.
 * @text_content: The content in the files.
 * Return: If failure - 0.
 */
void creates_file(const char *filename, char *text_content)
{
	char cpy[1024];
	int rtno, rtno2, rtnr, rtnw;

	rtno = open(text_content, O_RDONLY);
	rtno2 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rtnr = read(rtno, cpy, 1024);

	if (rtnr == -1 || rtno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		       text_content);
		exit(98);
	}

	while (rtnr > 0)
	{
		rtnw = write(rtno2, cpy, rtnr);

		if (rtnw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
				filename);
			exit(99);
		}
		rtnr = read(rtno, cpy, 1024);
	}
}

/**
 * main - Checks the code.
 * @ac: Argument count.
 * @av: Command line arguments.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", av[0]);
		exit(97);
	}

	creates_file(av[2], av[1]);

	return (0);
}
