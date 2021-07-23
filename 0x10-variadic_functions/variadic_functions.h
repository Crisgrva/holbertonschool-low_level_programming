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
/*  END_PROTOTYPES */

#endif /* VARIADIC_FUNCTIONS_H */
