#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: array
 * @size: size_t
 * @value: int
 * Return: int
*/

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, i;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		size_t md = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%i", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		if (array[md] < value)
		{
			start = md + 1;
		}
		else if (array[md] > value)
		{
			end = md - 1;
		}
		else
			return (md);
	}
	return (-1);
}
