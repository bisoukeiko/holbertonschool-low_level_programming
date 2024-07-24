#include "main.h"

int print_string(va_list ap)
{

        int len = 0;
        int index;
        char *str = va_arg(ap, char*);

        if (str == NULL)
        {
                str = "(null)";
        }

/*
        while (*str)
        {
                _putchar(*str++);
                len++;
        }
*/

        for (index = 0; str[index] != '\0'; index++)
        {
                _putchar(str[index]);
                len++;
        }

        return (len);

}
