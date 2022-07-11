#include "main.h"
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
		printf("%d", p);
	}
	if (p < 0)
	{
		printf ("-");
		printf("%d", p * -1);
	}
	
	return (1);
}
