#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints largest prime factor
 *
 * Return Always 0
 */
int main(void)
{
	int n  = 1231952;
	int i = 2;
	int k = i /2;
	while (i <= n/2)
	{
		if ( n % i == 0 && i % i == 0)
		{
			printf("%d ",i);
		}
	i++;
	}
	return (0);


}
