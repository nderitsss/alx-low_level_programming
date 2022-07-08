#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * _isupper - nested loop functions
 * c is the char being checked
 * Return 0
 */
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
