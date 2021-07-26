#ifndef OWN_FUNCTIONS_H
#define OWN_FUNCTIONS_H

#include <stdarg.h> /*  Variadic Function   */
#include <unistd.h> /*  Write() */
#include <stdlib.h> /*  Exit() */

/**
 * struct func - function structure
 * @name: character match with % in printf
 * @f: function match with % in printf
 */

/*  STRUCTURES  */
typedef struct func
{
	char *name;
	int (*f)(va_list);
} funct_t;

/*  PROTOTYPES  */

/*  MAIN FUNCTION  */
int _printf(const char *format, ...);

/*  SUBFUNCTIONS  */
int _printf_s(va_list);
int _printf_c(va_list);
int _printf_d(va_list);
int _printf_i(va_list);
int _printf_per(va_list);
int _printf_bin(va_list);
int _printf_o(va_list);

/*  AUX FUNCTIONS */
int _putchar(char c);
int _strlen(char *s);
char *_itoa(int i, char *strout, int base);
char *_strncpy(char *dest, char *src, int n);

#endif
