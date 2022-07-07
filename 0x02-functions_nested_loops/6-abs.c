#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return Always (Success) 0
 *
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n*-1);
	}
	else
	{
		return (n*1);
	}
}
