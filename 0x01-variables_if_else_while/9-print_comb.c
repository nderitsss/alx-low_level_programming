#include <stdio.h>
#include <stdlib.h>
/**
 * main prints number with commas
 *
 * return always sucess 0
 */
int main(void)
{
	int n = '0';

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
