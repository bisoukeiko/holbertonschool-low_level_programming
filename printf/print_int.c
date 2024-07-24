#include "main.h"

int print_int(va_list ap)
{
        int len = 0;
        int tmp;
        int cnt = 1;

        int num = va_arg(ap, int);

        if (num < 0)
        {
                _putchar('-');
                len++;

                if (num == -2147483648)
                {
                        _putchar(2);
                        len++;
                        num = 147483648;
                }
                else
                {
                        num = -num;
                }
        }

        tmp = num;

        while (tmp > 9)
        {
                tmp = tmp / 10;
                cnt = cnt * 10;
        }

        while (cnt >= 1)
        {
                _putchar((num / cnt) % 10 + '0');
                cnt = cnt / 10;
                len++;
        }

        return (len);

}
