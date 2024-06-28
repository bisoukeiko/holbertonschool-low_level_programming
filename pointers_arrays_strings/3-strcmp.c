#include "main.h"

/**
 * _strcmp - cmpare two strings
 * @dest: string to compare
 * @src: string to compare
 * Return: value s1 - s2
 */

int _strcmp(char *s1, char *s2)
{

	while(*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
	
		s1++;
		s2++;
		
	}

	return (0);

}
