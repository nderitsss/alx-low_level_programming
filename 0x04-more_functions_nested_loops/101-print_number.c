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

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 999)
	{
		_putchar(n / 1000 + '0');
	}
	if (n > 99)
	{
		_putchar(n / 100 + '0');
	}
	if (n > 9)
	{
		_putchar(n / 10 + '0');
	}
	_putchar(n % 10 + '0');
}
