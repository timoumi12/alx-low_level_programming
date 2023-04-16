#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - whatever
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
