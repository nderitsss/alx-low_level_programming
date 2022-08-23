#include <stdlib.h>
#include <stdio.h>
/**
 * main - printd the input file
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		return (1);
	}
	printf("%s\n",argv[1]);
	return (0);
}
