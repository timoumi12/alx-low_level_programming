#include "dog.h"

/**
 * init_dog - check the code
 * @d: struct
 * @name: string
 * @age: float
 * @owner: string
 * Return: Always void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

