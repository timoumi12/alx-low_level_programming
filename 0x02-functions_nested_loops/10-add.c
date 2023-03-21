#include <stdio.h>

/**
 * add - whatever
 * @a: int1
 * @b: int 2
 *
 * Return: adding two ints
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * main - eh
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
