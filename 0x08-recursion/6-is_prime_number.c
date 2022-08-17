#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - find prime numbers
 * @n : the int
 *
 * Return ; always an int
 */
int is_prime_number(int n)
{
	int m = 2;
	
	if (n == 1)
	{
		return (0);
	}
	while (m <= n / 2)
	{
		if (n % m == 0)
		{
			return (0);
		}
		if (n % m != 0)
		{
			return (1);
		}
		m++;
	}
	return (is_prime_number(n));
}
