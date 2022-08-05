#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all te number od an argument
 * @n : the integers
 * @... : an ellipse
 *
 * Return: Always an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pd;
	int p = n;
	int i;
	int sum = 0;

	va_start(pd, n);
	if (n == 0)
	{
		(return 0);
	}
	for (i = 0; i < p; i++)
	{
		sum += va_arg(pd, int);
	}
	va_end(pd);
	return (sum);
}
