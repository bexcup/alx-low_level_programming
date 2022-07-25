#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the file that is read.
 * @letters: The number of letters the function will read and print.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_wrote;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	n_read = read(fd, buffer, letters);
	n_wrote = write(STDOUT_FILENO, buffer, n_read);

	close(fd);

	free (buffer);

	return (n_wrote);
}
