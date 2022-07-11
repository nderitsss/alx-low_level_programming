#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * puts_half - prints half a function
 * @str : the string
 *
 * Return Always 0
 */
void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		half = (length - 1) / 2;
	}
	else if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		_putchar(' ');
	}
	while (half <= length)
	{
		if (str[half] != '\0')
		{
			_putchar(str[half]);
		}
		half++;
	}
}
