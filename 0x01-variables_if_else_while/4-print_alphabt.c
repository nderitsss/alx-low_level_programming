#include <stdio.h>
#include <stdlib.h>
/**
 * main - printing everything but q and e
 *
 * Return: Always success (0)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		else
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
