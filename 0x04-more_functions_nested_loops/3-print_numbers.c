#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints nums for 0 to 9
 * void return nothing
 *
 * Return nothing
 */
void print_numbers(void)
{
	char n = '0';
	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
