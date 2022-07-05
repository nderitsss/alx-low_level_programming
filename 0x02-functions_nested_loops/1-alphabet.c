#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return : Always (Success) 0
 */
void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

