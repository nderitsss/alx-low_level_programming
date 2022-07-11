#include "main.h"
#include <stdio.h>
/** 
 * print_array - prints an array of numbers
 * @a : the integer
 * @n : size of array
 *
 * Return  Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{ 
			break;
		}
			printf(", ");
	}
	printf("\n");
}
