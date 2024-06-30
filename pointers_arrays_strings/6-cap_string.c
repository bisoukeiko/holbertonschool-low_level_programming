#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string which include space, tabulation,
 *       new line, ,, ;, ., !, ?, \", (, ), {, and }
 * Return: pointer
 */

char *cap_string(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{

		if (str[index - 1] == ' '
		 || str[index - 1] == '\t'
		 || str[index - 1] == '\n'
		 || str[index - 1] == ','
		 || str[index - 1] == ';'
		 || str[index - 1] == '.'
		 || str[index - 1] == '!'
		 || str[index - 1] == '?'
		 || str[index - 1] == '"'
		 || str[index - 1] == '('
		 || str[index - 1] == ')'
		 || str[index - 1] == '{'
		 || str[index - 1] == '}')
		{

			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}

	}

	return (str);

}
