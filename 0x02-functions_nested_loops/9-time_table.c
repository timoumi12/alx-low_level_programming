#include <stdio.h>
/**
 * times_table - whatever
 *
 * Return: times table 0~9
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
				printf("%2d", i * j);
			else
				printf("%2d, ", i * j);
		}
		printf("$\n");
	}
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	times_table();
	return (0);
}
