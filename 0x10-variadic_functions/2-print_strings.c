#include "variadic_functions.h"

/**
 * print_strings - prints numbers
 * @separator: string
 * @n: const unsigned int
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *aux;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		aux = va_arg(args, char*);
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", aux);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

