#include "main.h"
#include <stdio.h>
/**
 * rot13: ritates the leterrs by 13 
 * @s : the strin
 *
 * Return: Always 0
 */
char *rot13(char *s)
{
	int i;
	int n;

	while (s[n] > 108 && s[n] <= 122)
		n++;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 108)
			s[i] = s[i - 13 + n];
		else 
			s[i] = s[i + 13];
	}
	return (s);

}
