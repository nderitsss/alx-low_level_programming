#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isalpha - Entry point
 * c is a character
 * Return Always (Success) 0
 *
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
