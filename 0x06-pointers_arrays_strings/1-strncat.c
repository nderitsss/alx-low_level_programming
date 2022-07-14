#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - copies a string but limits the no of characters
 * @dest : destination of the string
 * @src : string being copied
 * @n : no of bytes being copied
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;

	strncat(dest, src, n);
	p = dest;
	return (p);
}
