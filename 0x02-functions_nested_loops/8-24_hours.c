#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - whatever
 *
 * Return: last digit of input
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
			printf("%02d:%02d\n", i, j);
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	jack_bauer();
	return (0);
}
