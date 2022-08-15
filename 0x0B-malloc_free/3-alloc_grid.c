#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a 2d array
 * @width : an int
 * @height : an int
 *
 * Return: is null or num
 */
int **alloc_grid(int width, int height)
{
	int *p;

	p = malloc(sizeof(int) * width * height);
	if (width <= 0 || height <= 0 || p == NULL)
	{
		return (NULL);
	}
	return (0);
}
