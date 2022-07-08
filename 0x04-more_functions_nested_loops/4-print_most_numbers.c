#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_most_numbers - prints 0 to 9 but 2 and 4
 *
 * Return always 0
 */
void print_most_numbers(void)
{
	char n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
