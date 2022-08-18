#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees my dog
 * @d :the dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
