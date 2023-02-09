#include "main.h"
/**
 * read_textfile - reads a file
 * @filename: name of file
 * @letters: number of letters read
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read, char_count, fd_open;
	char *buf_leters;

	if (filename == NULL)
		return (0);

	fd_open = open(filename, O_RDONLY);

	if (fd_open == -1)
		return (0);

	buf_letters = malloc(sizeof(char) * letters);

	if (buf_letters == NULL)
		return (0);

	fd_read = read(fd_open, buf_letters, letters);

	if (fd_read == -1)
	{
		free(buf_letters);
		return (0);
	}
	char_count = write(STDOUT_FILE, buf_letters, fd_read);
	if (char_count == -1)
	{
		free(buf_letters);
		return (0);
	}
	close(fd_open);
	free(buf_letters);
	return (char_count);
}
