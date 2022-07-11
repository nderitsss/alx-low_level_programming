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
	half = length / 2;
	 while(str[half] != '0' && half <= length)
	 {
		 _putchar(str[half]);
		 half++;
	 }
	_putchar(10);
}
