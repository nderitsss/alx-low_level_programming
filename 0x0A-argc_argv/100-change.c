#include <stdlib.h>
#include <stdio.h>
/**
 * main - min number of change for customers
 * @argc : counts the arguments
 * @argv : the arguments
 *
 * Return: num of coins
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int d = atoi(argv[2]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (d < 0)
	{
		printf("0\n");
	}
	while (d > 0)
	{
		if (d / 25 > 0)
		{
			count += d / 25;
			d = d % 25;
		}
		else if (d / 10 > 0)
		{
			count += d / 10;
			d = d % 10;
		}
		else if (d / 5 > 0)
		{
			count += d / 5;
			d = d % 5;
		}
		else if (d / 2 > 0)
		{
			count += d / 2;
			d = d % 2;
		}
		else 
		{
			count += d;
		}

	}
	return (count);
}
