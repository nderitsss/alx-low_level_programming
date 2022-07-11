#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - copies srting
 * @ dest : where the value returns
 * @src : where i am copying from
 *
 * Return will be found in dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p;

	src = (char *) src;
	dest = (char *)dest;

	p = strcpy(src, dest);
	return (p);
}
