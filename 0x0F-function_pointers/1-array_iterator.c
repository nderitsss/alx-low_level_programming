#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - prints each element of an array
 * @array : an array of ints
 * @size : size of array
 * @action : a pointer to a function that returns nothing
 *
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	int p = size;

	if (array == NULL || size == NULL || action == NULL)
	{
		return;
	}
	while (i < p)
	{
		action(array[i]);
		i++;
	}
}
