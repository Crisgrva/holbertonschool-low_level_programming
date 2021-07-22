#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* LIBRARIES */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/*------------------*/

/* PROTOTYPES */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
/*------------*/
#endif
