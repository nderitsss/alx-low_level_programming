#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints the elements of a list
 * @list_t*h: the list
 *
 * Return: the number of elelments in the list
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	
	h = malloc(sizeof(list_t));

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	while (h != NULL)
	{
		{
			printf("%s", h->data);
		}
		count ++;
		h = h->h;
	}
	return (count);	
}
