#include "main.h"

/**
 * puts_half - prints even caracters
 * @str: string
 *
 * Return: always void
*/
void puts_half(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	str--;
	if (i % 2 != 0)
		while (i > (i - (i -1) / 2))
		{
			_putchar(*str);
			str--;
			i--;
		}
	else
		while (i > i / 2)
		{
			_putchar(*str);
			str--;
			i--;
		}
}
