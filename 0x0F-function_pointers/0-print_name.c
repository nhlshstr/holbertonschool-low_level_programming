#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - Prints a string using the provided function
 *
 * @name: Pointer to character string
 * @f: Pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
