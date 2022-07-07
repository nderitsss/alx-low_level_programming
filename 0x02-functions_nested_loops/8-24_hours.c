#include "main.h"



/**
 *
 * jack_bauer - Entry point
 *
 * Return Always (Success) 0
 */
void jack_bauer(void)
{
	int hour, h1, h2, min, min1, min2;

	for (hour = 0; hour < 24; hour++)
	{
		h1 = hour / 10;
		h2 = hour % 10;
		for (min = 0; min < 60; min++)
		{
			min1 = min / 10;
			min2 = min % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(min1 + '0');
			_putchar(min2 + '0');
			_putchar('\n');
		}
		min = 0;
	}
}
