#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises a variable
 * @d : a pointer
 * @name : name of dog
 * @age : age of dog
 * @owner : the dog owner name
 *
 * Return: a NULL value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *user;
	user->d = d;
	user->name = name;
	user->age = age;
	user->owner = owner;
}
