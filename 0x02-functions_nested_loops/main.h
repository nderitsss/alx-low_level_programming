#include <stdio.h>
/**
 * main -Entry point
 *
 * Return always success 0
 */
int _putchar(char* c)
{
	return (write(1, &c ,25));
}
