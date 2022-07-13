#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - appends the content of one string to another witha null byte
 * @dest : the destination of the string
 * @src : the string being copied
 *
 * Return Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *p ;

	strcat(dest, src);
	p = dest;

	return (p);
	
}
