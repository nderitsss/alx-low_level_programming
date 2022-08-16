#include "main.h"
#include <stdlib.h>
/**
 *array_range - creates an array of integers
 *@min : the minimum int
 *@max : the max int
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int range = max - min;
	int *s = malloc (sizeof(int) * range);

	if (s == NULL || min > max)
	{
		return (NULL);
	}
	return (s);
}
