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
	char *cname;
	char *cowner;

	if (d == NULL)
		return (NULL);
	cname = malloc(strlen(name) + 1);
	if (cname == NULL)
	{
		free(d);
		return (NULL);
	}
	cowner = malloc(strlen(name) + 1);
	if (cowner == NULL)
	{
		free(cname);
		free(d);
		return (NULL);
	}
	strcpy(cname, name);
	strcpy(cowner, owner);
	(*d).name = cname;
	(*d).age = age;
	(*d).owner = cowner;
	return (d);
}
