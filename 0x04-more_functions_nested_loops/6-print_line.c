#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a line
 *
 * Return Always 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
