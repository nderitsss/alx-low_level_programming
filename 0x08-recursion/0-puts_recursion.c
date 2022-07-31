#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - prints to std output
 * @s : the string iin question
 *
 * Return: a null value
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
