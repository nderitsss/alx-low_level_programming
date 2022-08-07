#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies one string and returns it's pointer
 * @str : the string being copied
 *
 * Return:Alwaysa char
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(strlen(str) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
