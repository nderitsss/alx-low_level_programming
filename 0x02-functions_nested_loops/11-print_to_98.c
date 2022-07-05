#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return Always success 0
 */
void print_to_98(int n)
{
	int upper = 98;

	if (n > upper)
	{
		while (n >= upper)
		{
			if (n == upper)
			{
				printf("%d \n", n);
			}
			else
			{
				printf("%d", n);
				printf(", ");
			}
		n--;
		}
	}
	if (n < upper)
	{
		while (n <= upper)
		{
			if (n == upper)
			{
				printf("%d \n", n);
			}
			else
			{
				printf("%d", n);
				printf(", ");
			}
		n++;
		}
	}
}
