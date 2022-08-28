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
	unsigned int k = 0;
	unsigned int i;
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}
	if (atoi(b) == 1)
	{
		return (1);
	}
	i = atoi(b);
	while (i != 0)
	{
		if (i % 10 != 0 || i % 10 != 1)
		{
			return (0);
		}
		while (i % 10 == 1)
		{
			while (k <= count)
			{
				if (count == 0)
				{
					dec = 1;
				}
				if (count == 1)
				{
					dec = 2;
				}
				dec = dec + 2 * 2;
				k++;
			}
		}
		count++;
		i = i / 10;
	}
	return (dec);

}
