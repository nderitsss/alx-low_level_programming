#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 to 9 ten times
 *
 * Return Always 0
 */
void more_numbers(void)
{
	char c = '0';
	int i = 0;

	while (i < 10)
	{
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
	i++;
	}
	
}
