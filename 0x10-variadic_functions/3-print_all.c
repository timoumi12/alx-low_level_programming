#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: string
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, n;
	char *aux, *sep = "";
	va_list args;

	n = strlen(format);
	va_start(args, format);

	if (format != NULL)
		while (i < n)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, char));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					aux = va_arg(args, char *);
					if (aux == NULL)
						aux = "(nil)";
					printf("%s%s", sep, aux);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}

	printf("\n");
	va_end(args);
}

