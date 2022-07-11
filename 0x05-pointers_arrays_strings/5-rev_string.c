#include "main.h"
#include <stdio.h>
/**
 * 5-rev_string.c - reverses a string
 *
 * Return ALways 0
 */
void rev_string(char *s)
{
	int i, n;

	n = _strlen(s);
	for (i = 0; i < n / 2; i++)
	{
		char ch = s[i];
		s[i] = s[n - 1 -i];
		s[n - 1 -i] = ch;
	}
}
