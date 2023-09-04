#include "main.h"

/**
 * create_file - file.
 * @filename: Ana.
 * @text_content: A.
 *
 * Return: return 0.
 */
int create_file(const char *filename, char *text_content)
{
	int y, l, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	y = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	l = write(fd, text_content, len);

	if (y == -1 || l == -1)
		return (-1);

	close(y);

	return (1);
}

