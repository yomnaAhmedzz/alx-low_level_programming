#include "main.h"

/**
 * append_text_to_file - text file.
 * @filename: 2-append_text_to_file.c.
 * @text_content: 2-append_text_to_file.c.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ss, c, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ss = open(filename, O_WRONLY | O_APPEND);
	c = write(ss, text_content, len);

	if (ss == -1 || c == -1)
		return (-1);

	close(ss);

	return (1);
}

