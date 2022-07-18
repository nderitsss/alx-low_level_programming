#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - finds a common occurence i strins
 * @haystack : the pile of string
 * @needle : what we find
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char* p;

	p = strstr(haystack, needle);

	if (p)
		return(p);
	else
		return (NULL);
	
}
