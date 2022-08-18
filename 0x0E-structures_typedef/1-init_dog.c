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
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
