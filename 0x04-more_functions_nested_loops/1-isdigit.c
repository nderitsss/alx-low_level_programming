#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit checks for numbers
 * c char that is checked
 *
 * Return always 0
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
