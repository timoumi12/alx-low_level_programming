#include "dog.h"

/**
 * free_dog - frees a dog
 *
 * @d: Pointer to the struct dog
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
