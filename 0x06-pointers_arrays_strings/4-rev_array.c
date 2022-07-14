#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int z;

	for (z = 0; z < n / 2; z++)
	{
		int temp = a[z];

		a[z] = a[n - z - 1];
		a[n - z - 1] = temp;
	}
}
