#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number 0 to 99
 * 
 * Return: Always an int
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
	if (i <= 9)
	{
		putchar('0');
		putchar(i + '0');
	}
	else
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
	}
	putchar(' ');
	putchar(',');
	putchar(' ');
	i++;
	}
}
