#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts strings to integers
 * @ s : the string
 *
 * Return Always 0
 */
int _atoi(char *s)
{
	int p;
	
	p = atoi(s);
	if (isdigit(p) != 0)
	{
		return (0);
	}
	if (p > 0)
	{
		printf("%d\n", p);
	}
	if (p < 0)
	{
		printf ("-");
		printf("%d\n", p * - 1);
	}
	
	return (p);
	_putchar(10);
}
