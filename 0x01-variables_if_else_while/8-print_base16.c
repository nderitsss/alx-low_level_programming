#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints hexadecimals
 *
 * Return always (success) 0
 */
int main(void)
{
	int n = '0';

	char p = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}
