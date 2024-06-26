#include "main.h"

/**
 * rev_string -  reverse a string
 * @s: pointer of string
 * Return: nothing
 */

void rev_string(char *s)
{

	int len;
	int index1;
	int index2 = 0;
	char tmp;

	for (len = 0; s[len] != '\0'; ++len)
	{
		continue;
	}

	for (index1 = (len - 1); index1 > ((len - 1) / 2); index1--)
	{

		tmp = s[index2];
		s[index2] = s[index1];
		s[index1] = tmp;

		index2++;

	}

	s[len] = '\0';

}
