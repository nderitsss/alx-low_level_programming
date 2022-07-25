#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of agrc
 * @argc : prints int
 * @argv : prints a string
 * Return: ALways 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
