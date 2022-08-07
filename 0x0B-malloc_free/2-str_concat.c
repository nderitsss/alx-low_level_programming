#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - appends a string to another
 * @s1 : destination
 * @s2 : the string to be appended
 *
 * Return: Always int
 */
char *str_concat(char *s1, char *s2)
{
	char *m;
	int size;

	size = strlen(s1) + strlen(s2) + 1;
	m = malloc(size);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	strcpy(m, s1);
	strcpy((m +strlen(s1)),s2);
	return (m);
}
