#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabet on new line
 *
 * Return: Always success (0)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
