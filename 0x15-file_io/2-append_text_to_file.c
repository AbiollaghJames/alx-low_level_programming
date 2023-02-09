#include "main.h"
/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 on Success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write, len = 0;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_WRONLY | O_APPEND);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
	{
		len++;
	}
	fd_write = write(fd_open, text_content, len);

	if (fd_write == -1)
		return (-1);
	close(fd_open);
	return (1);
}
