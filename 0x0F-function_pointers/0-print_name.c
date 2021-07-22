#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Function that prints a name.
 * @name: Name to print
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(f)(name);
}
