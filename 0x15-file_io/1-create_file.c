#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: Pointer to the file that is read.
 * @text_content: Text to include in the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		while (text_content[y])
			y++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, y);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
