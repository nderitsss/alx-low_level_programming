#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stddef.h>
typedef struct {
	char* data;
	struct list_t *h
} list_t;
size_t print_list(const list_t *h);
int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
#endif
