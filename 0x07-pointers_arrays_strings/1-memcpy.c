#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - copies one string to another without accounting for overlap
 * @dest : destination string
 * @src : the string being copied
 * @n : amount of bytes being copied
 *
 * Return: a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
