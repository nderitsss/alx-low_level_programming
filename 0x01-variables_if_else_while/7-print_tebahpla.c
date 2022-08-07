#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in reverse
 *
 * return: always success 0
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
