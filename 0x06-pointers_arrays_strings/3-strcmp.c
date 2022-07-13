#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - compares tow strings
 * @s1 : the destination string
 * @s2 : the string being copied
 *
 * Return ALways 0
 */
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) > 0)
	{
		return (15);
	}
	else if (strcmp(s1, s2) < 0)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
