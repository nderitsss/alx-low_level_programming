#include <stdlib.h>
#include "main.h"
#include  <stdio.h>
/**
 * create_array - creates an array with a specific first character
 * @size : size of array
 * @c : the first character
 *
 * Return: always int
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(char) * size);
	s[0] = c;

	if (size == 0 && s == NULL)
	{
		return (NULL);
	}
	return (s);
}
