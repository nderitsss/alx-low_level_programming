#include <stdio.h>
#include <stdlib.h>
/**
 * main - printd all numbers from zero to nine using putchar
 *
 * Return: Always (success) 0
 */
int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

