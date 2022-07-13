#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses a string
 * @s : a pointer
 *
 * Return Always 0
 */
void print_rev(char *s)
{
	int n;

	while (s[n] != '\0')
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;

	}
}
