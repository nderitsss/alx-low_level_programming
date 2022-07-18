#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk : compares two string till finds the first alike caracter
 * @s : the string
 * @accept : the charcater
 *
 * Return: the new string
 */
char *_strpbrk(char *s, char *accept)
{
	char* p;

	p = strpbrk(s, accept);
	return (p);
}
