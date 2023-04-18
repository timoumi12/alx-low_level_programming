#include "dog.h"

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: strlen
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copies a string
 * @dest: string
 * @src: string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	(*d).name = malloc(_strlen(name) + 1);
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	(*d).owner = malloc(_strlen(owner) + 1);
	if ((*d).owner == NULL)
	{
		free((*d).name);
		free(d);
		return (NULL);
	}
	_strcpy((*d).name, name);
	_strcpy((*d).owner, owner);
	(*d).age = age;
	return (d);
}
