#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator : separates the numbers
 * @n : the numbers to print
 *
 * Return: Alway an int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i = 0;

	va_start(p, n);
	while (i < n)
	{
		if (separator == NULL)
		{
			separator = "";
		}
		printf("%d", va_arg(p, int));
		if (i == n - 1)
		{
		break;
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(p);


}
