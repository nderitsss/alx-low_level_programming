#include "main.h"
#include "stdio.h"
/**
 * reset_to_98 - updates the value it points to 98
 * @a : integer
 * @b : integer
 *
 * Return Always 0
 */
void reset_to_98(int *n)
{
	n = (int*)n;
	*n = 98;
}
