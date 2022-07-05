#include <stdio.h>
#include <stdlib.h>
/**
 * main
 *
 * return succes 0
 */
int main(void)
{
	int i, l;

	for (l = 48; l < 58; l++)
	for (i = l + 1; i < 58; i++)
	putchar(l);
	putchar(i);
	if (l != 56 || i != 57)
	putchar(44);
	putchar(52);
	putchar('\n');
	return (0);
}
