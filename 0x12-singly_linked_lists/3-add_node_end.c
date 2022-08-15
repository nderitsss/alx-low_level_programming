#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node_end - adds a node at the end
 * @head : points to the new node
 * @str : the data in the new pointer
 *
 * Return:address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *p;

	head = malloc(sizeof(list_t));
	head->data = str;
	p = strdup(str);
	head->h = h;
	h = head;
	return (p);
}
