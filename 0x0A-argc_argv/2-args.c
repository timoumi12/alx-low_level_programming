#include <stdio.h>

/**
 * main - whatever
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("\n");

	return (0);
}
