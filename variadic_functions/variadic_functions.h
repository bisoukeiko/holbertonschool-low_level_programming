#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>

/**
 * struct funckey - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @func: function to use for printing
 * @str: character string
 */
typedef struct print
{
	char type;
	void (*func)(va_list);

} print_t;




int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
