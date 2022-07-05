#include "main.h"
/**
 * main - Emtry point
 *
 * Return : success = 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	while ( i < 10)
	{
		_putchar(c);
		i++;
	}
	}
	_putchar('\n');
}
