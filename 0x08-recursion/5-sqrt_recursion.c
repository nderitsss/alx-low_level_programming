#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _sqrt_recursion - finds the square root
 * @n : the num
 *
 * Return: Always an int
 */
int _sqrt_recursion(int n)
{
	int start = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (start * start != n)
	{
		start++;
		return (_sqrt_recursion(n));
	}
	else if (start * start == n)
	{
		return (start);
	}
	return (-1);
}
