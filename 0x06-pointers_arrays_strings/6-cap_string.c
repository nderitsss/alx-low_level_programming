#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string : capitalises the first letter of a word in a string
 * @s : the string in question
 *
 * Return: value is a char
 */
char *cap_string(char *s)
{
	int n;

	for (n = 0; n != '\0'; n++)
		if (s[n] == ' ')
			s[n+1] = s[n+1] - 32;
	return (s);
}
