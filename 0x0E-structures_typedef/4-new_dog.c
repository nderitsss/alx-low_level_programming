#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - new baby
 * @name : name of new abby
 * @age : the age of my abby
 * @owner : the owner of my baby
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *s;
	char *p;

	dog_t.name = name;
	dog_t.age = age;
	dog_t.owner = owner;

	strcpy(s,owner);
	strcpy(p,name);
	if (strlen(name) == 0)
	{
		return (NULL);
	}
}
