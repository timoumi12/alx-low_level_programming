#include "dog.h"

/**
 * new_dog - creates a dog
 * @name: string
 * @age: int
 * @owner: string
 * Return: dog_t
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return (d);
}
