#include "main.h"
#include <stdio.h>
/**
 * 5-rev_string.c - reverses a string
 * @s : a string
 * Return ALways 0
 */
void rev_string(char *s)
{
	int i, n;

	while (s[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n / 2; i++)
	{
		char temp = s[i];
		s[i] = s[n - 1 -i];
		s[n - 1 -i] = temp;
		n--;
	}
}
