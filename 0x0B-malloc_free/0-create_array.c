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
	int i;

	if (size != 0)
	{
		arr = (char*) malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return arr;
	}
	return NULL;
}

