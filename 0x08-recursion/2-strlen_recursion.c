#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _strlen_recursion - prints like string length
 * @s : the string
 *
 * Return: always int
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	if (s != '\0')
		n++;
	_strlen_recursion = n;
	return (_strlen_recursion);

}
