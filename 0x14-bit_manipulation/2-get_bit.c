#include "main.h"
/**
 * get_bit - finds bit value at a given index
 * @n : the dec num
 * @index: the index value
 *
 * Return:bit of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int rem;
	int k;

	for(; i <= index; i++)
	{
		rem = n & 1;
		if (i == index)
		{
			k = rem;
		}
		n = n >> 1;
	}
	return (k);
}
