#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * int _strspn : returns number of bytes
 * @s : string
 * @accept : string
 *
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = strspn(s, accept);
	return (n);
}
