#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * string_toupper - converts strings to uppercase
 *
 * Return Always 0
 */
char *string_toupper(char *s)
{
	int i;
	int z;
	char *p;

	while (s[z] != '\0')
		z++;
	for (i = 0; i < z; i++)
	{
		_putchar(toupper(s[i]));
	}
	 p = s;
	return (p);
}
