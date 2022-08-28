#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints numbers followed by a new line
 * @separator : separates the numbers
 * @n : the numbers to print
 *
 * Return: Alway an int
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		if (va_arg(p, char*) == NULL)
		{
			return;
		}
		printf("%s", va_arg(p, char*));
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
