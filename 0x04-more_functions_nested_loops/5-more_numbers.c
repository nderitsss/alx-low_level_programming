#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 0 to 9 ten times
 *
 * Return Always 0
 */
void more_numbers(void)
{
	int k = 0;
	int i = 0;

	while (i < 10)
	{
		for (k = 0; k < 15 ;k++)
		{ 
			if ( k > 9)
			{
				_putchar(k / 10+ '0');
			}
			_putchar(k % 10 + '0');
		}

	_putchar(10);
	i++;
	}
	
}
