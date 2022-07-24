#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: prints int num of argv
 * @argv : string of arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
	return (0);
}
