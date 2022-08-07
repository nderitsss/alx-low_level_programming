#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * factorial - factorial
 * @n : the int factor
 *
 * Return: always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
