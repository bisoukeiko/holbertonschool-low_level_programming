#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

typedef struct {
        char specifier;
        int (*print_func)(va_list ap);
} specifier_t;

int     _putchar(char c);
int     _printf(const char *format, ...);
int     print_int(va_list ap);
int     print_char(va_list ap);
int     print_string(va_list ap);

#endif

