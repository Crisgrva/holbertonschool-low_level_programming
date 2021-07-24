#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*  STD LIBRARIES   */
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/*  END_STD LIBRARIES   */

/*  PROTOTYPES  */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);
/*  END_PROTOTYPES */

/* STRUCTURES */

/**
 * struct format - Type of data
 *
 * @name: Name to identify type of data
 * @f: The function associated
 */
typedef struct format
{
	char *name;
	void (*f)(va_list);
} format_t;

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_charp(va_list);
#endif /* VARIADIC_FUNCTIONS_H */
