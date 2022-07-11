#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverses a string
 * @*s : a pointer
 *
 * Return Always 0
 */
void print_rev(char *s)
{
	int n;
	s = (char *)s;

	n = _strlen(s);

	while (n >=0)
	{
		_puts(s[n]);
		n--;

	}
}
