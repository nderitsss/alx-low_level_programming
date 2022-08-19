#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name of a function
 * @name : the name 
 * @f: a functionn pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
