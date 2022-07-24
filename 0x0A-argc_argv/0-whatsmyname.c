#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints file name
 * @argc: prints an int
 * @argv: prints a string
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
