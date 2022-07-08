#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line
 *
 * Return Always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{ 
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
