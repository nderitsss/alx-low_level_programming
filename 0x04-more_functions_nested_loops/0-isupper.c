#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - nested loop functions
 *
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
