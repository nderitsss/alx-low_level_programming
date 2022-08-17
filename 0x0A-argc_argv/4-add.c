#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive integers
 * @argc : counts arguments
 * @argv : arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int d;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		d = atoi(argv[i]);

		if (d == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += d;
	}
	printf("%d\n", sum);
	return (0);
}
