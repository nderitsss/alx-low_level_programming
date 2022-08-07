#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * _pow_recursion - finds powers of numbers
 * @x : the base 
 * @y : the exponent
 *
 * Return: Always an int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0 )
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion( x, y - 1));
}
