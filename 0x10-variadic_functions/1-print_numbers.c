#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: const unsigned int
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
		if (separator != NULL)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	printf("%d\n", va_arg(args, int));
	va_end(args);
}

