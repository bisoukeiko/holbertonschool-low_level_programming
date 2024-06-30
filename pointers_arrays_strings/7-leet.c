#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: The string to be encoded
 * Return: pointer
 */

char *leet(char *str)
{
	int index_s;
	int index_l;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (index_s = 0; str[index_s] != '\0'; index_s++)
	{
		for (index_l = 0; index_l < 10; index_l++)
		{
			if (str[index_s] == leet[index_l])
			{
				str[index_s] = code[index_l];
			}
		}

	}

	return (str);

}
