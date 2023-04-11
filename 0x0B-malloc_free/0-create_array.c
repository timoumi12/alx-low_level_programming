#include "main.h"

/**
 * create_array - creates array
 * @size: unsigned int
 * @c: char
 *
 * Return: string
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);
	if (size != 0 && arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
	return (NULL);
}

