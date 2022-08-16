#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1 : the destination string
 * @s2 : the string to be appended
 * @n :num bytes to be appended
 *
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl1, sl2, sl3;
	char *copy;

	sl1 = strlen(s1);
	sl2 = strlen(s2);
	if (n >= sl2)
	{
		n = sl2;
	}
	sl3 = sl1 + n + 1;
	copy = malloc(sizeof(sl3));

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, s1);
	copy = strncat(copy, s2, n);
	return (copy);
}
