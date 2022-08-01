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
	int len = strlen(s);

	return (len);
	_putchar(10);
	_strlen_recursion(s);

}
