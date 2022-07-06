#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _islower- Entry point
 *
 * c is a character
 * Return Always (Success) 0
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

