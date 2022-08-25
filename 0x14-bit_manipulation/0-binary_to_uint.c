#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to decimal
 * @b : binary  decimal num
 *
 * Return: decimal num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int i, k;
	unsigned int count = 0;

	i = atoi(b);

	while (i != 0)
	{
	k = pow(2,count);
	dec += (i % 10) * k;
	count++;
	i /= 10;
	}
	return (dec);

}
