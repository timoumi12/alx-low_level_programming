#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
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
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
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
