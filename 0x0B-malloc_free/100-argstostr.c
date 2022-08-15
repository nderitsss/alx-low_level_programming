#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates two strings
 * @ac : an int arg
 * @av : a sstring type
 *
 * Return:a pointer to the string if successful
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0;

	s = malloc(sizeof(av) * ac);
	if (av == 0 || ac == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i <= ac)
	{
		strcpy(s,av);
		_putchar(10);
		i++;
	}


}
