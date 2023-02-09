#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: NULL terminated string to write to file
 * Return: 1 On Success
 */
int create_file(const char *filename, char *text_content)
{
	int fd_create, fd_write, len = 0;
	
	fd_create = open(filename, O_CREAT | O_TRUNC | O_WRONLY);

	if (fd_create == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	fd_write = write(fd_create, text_content, len);

	if (fd_write == -1)
		return (-1);
	close(fd_create);
	return (1);
}
