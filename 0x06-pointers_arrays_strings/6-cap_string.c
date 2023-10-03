#include "main.h"
#include <stdio.h>

/**capitalizes all words of a string
 * @s: string
 *
 * Return: string
*/

char *cap_string(char *s)
{
	char *begin;

	begin = s;

	while (*begin != '\0')
	{
		if (*(begin - 1) == ' ' && (int)*begin >= (int)'a' &&
		    (int)*begin <= (int)'z')
		{
			*begin = (char)((int)*begin - 32);
		}

		begin++;
	}

	return (s);
}
