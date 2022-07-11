#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * puts2 - prints a string with every other charcater
 * @str : the string
 *
 * Return Always 0
 */
int _strlen(char *s);
void puts2(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
