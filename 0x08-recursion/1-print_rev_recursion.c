#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints string in reverse
 * @s : the string being reversed
 *
 * Return: a null value
 */
void _print_rev_recursion(char *s)
{
	int n;
	int i;
	int temp;

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n/2; i++)
	{
		temp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = temp;
		_putchar(s[i]);
	}
}
