#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * print_number - prints integers
 *
 * Return Always 0
 */

void print_number(int n)
{
	int k = count(n);

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 9) 
	{
		_putchar(n + '0');
	}
	if (n > 9)
		while (k > 1)
		{
			_putchar(n / 10*(k-1) + '0');
		}
	_putchar(k % 10 + '0');
}
