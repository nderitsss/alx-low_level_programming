#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - fills a block of memory with a particular value
 * @s : the string 
 * @b : the character to fill with
 * @n : the number of bytes to fill with
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
