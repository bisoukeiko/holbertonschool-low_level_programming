#include "main.h"

/**
 * _atoi -  convert a string to an integer
 * @s: pointer of string
 * Return: integer
 */

int _atoi(char *s)
{

	int index;
	int cnt_sign = 0;
	int cnt_num = 0;
	unsigned int num = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
		{
			cnt_sign++;
		}

		if (s[index] >= '0' && s[index] <= '9')
		{
			cnt_num++;

			num = (num * 10) + (s[index] - '0');

			if (s[index + 1] >= '0' && s[index + 1] <= '9')
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}

	if (cnt_num != 0)
	{
		if ((cnt_sign % 2) != 0)
		{
			num = num * -1;
		}
	}
	return (num);
}
