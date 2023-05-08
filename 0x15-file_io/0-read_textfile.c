#include "main.h"

/**
 * read_textfile - reads from file
 * @filename: char*
 * @letters: size_t
 * Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *dest;

	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	dest = malloc(sizeof(char) * letters);
	if (dest == NULL)
		return (0);
	r = read(o, dest, letters);
	w = write(STDOUT_FILENO, dest, r);
	if (r == -1 || w == -1)
		return (0);
	close(o);

	return (w);
}

