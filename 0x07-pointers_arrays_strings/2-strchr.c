#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - seraches for the first occurence of a specific character
 * @s : the string
 * @c : the charcater
 *
 * Return: the string s
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	return (p);
}
