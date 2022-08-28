#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints binary from dec
 * @n : the num
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		_putchar(10);
		return;
	}
	if (n == 1)
	{
		_putchar(1 +'0');
		_putchar(10);
		return;
	}
	if ((n & 1) == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(1 + '0');
	}
	while (n != 0)
	{
		print_binary(n >> 2);
	}
	_putchar(10);
}
