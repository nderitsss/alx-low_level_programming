#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b :amount of memory
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *d = malloc(b);
	int p = 98;
	int *s = &p;

	if (d == NULL)
	{
		return (s);
	}
	return (d);
}
