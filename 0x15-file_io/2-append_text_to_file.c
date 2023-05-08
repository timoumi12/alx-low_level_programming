#include "main.h"

/**
 * append_text_to_file - writes to file
 * @filename: char*
 * @text_content: char*
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w, len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_WRONLY | O_APPEND, 0600);
	if (o == -1)
		return (o);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (w);
	close(o);

	return (1);
}

