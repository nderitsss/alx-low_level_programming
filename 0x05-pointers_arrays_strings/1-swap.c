#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps between int
 * @a : integer
 * @b : integer
 * Return Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
