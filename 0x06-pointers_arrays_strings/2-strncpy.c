#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies one string to another
 * @dest : the destination string
 * @src : the string being copied
 * @n : limites the bytes
 *
 * Return Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	strncpy(dest, src, n);
	p = dest;
	return (p);
}
