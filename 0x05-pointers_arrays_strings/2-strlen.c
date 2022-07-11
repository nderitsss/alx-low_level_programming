#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of the string
 * @s : a string
 * Return Always 0
 */
int _strlen(char *s)
{
	int p;

	s = (char *) s;
	p = strlen(s);

	return (p);
}
