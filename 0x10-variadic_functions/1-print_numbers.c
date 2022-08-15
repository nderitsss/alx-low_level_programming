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
	int i;
	int l = n;

	char temp;
	temp = (char)separator;

	va_start(p, n);
	for (i = 0; i < l; i++)
	{
		print(n/10);
		_putchar(n % 10 + '0');
		if (va_arg(p,int) == "")
		{
			return;
		}
		_putchar(temp);
	}

}
