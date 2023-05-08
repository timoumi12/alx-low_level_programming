#include "main.h"

/**
 * create_file - writes to file
 * @filename: char*
 * @text_content: char*
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t o, w, len;
	char *dest;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_CREAT | O_WRONLY, 0666);
	if (o == -1)
		return (o);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);

	return (1);
}

