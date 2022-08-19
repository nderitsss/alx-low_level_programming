#include <stdlib.h>
/**
 * int_index - compares ints in an array
 * @array : aray of ints
 * @size : size of array
 * @cmp :pointer to a function that compares the int
 *
 *Return: the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) > 0)
			break;
		i++;
	}
	return (i);
}
