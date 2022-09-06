#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints the elements of a list
 * @h: the list
 *
 * Return: the number of elelments in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		count = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
		
		h = h->next;
	}
	return (count);
}
