#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - struct
 * @name: char
 * @age: int
 * @owner: char
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
