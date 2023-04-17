#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 *
 * @d: Pointer to the struct dog
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
		printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name);
		printf("Age: %s\n", (*d).age == NULL ? "(nil)" : (*d).age);
		printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner);
}
