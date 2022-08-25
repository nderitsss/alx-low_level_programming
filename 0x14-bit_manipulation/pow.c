#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * pow - a power function
 * @base : the base 
 * @power
 *
 * Return: a power
 */
unsigned int powexp(unsigned int base, unsigned int power)
{
	while (power != 0)
	{
		base = base * base;
		power--;
	}
	return (base);
}
