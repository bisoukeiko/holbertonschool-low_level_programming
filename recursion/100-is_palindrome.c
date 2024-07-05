#include "main.h"

/**
 * check_palindrome - Checks if a string is a palindrome
 * @s: string
 * @len : length of the string
 * @index: index of string
 * Return: 1 if a string is a palindrome
 *         0 if a string is not a palindrome
 */

int check_palindrome(char *s, int len, int index)
{
	if (index == len - index || index == len - index -1)
	{
		return (1);
	}

	if (*(s + index) == *(s + (len - index - 1)))
	{
		return(check_palindrome(s, len, index + 1));
	}

	return (0);

}


/**
 * len_str - return the length of string
 * @s: string
 * Return: length of the string
 */

int len_str(char *s)
{
	int len = 0;

	if (*(s + len) != '\0')
	{
		len++;
		len += len_str(s + len);
	}

	return (len);

}

/**
 * is_palindrome - cheking a string is a palindrome or no
 * @s: string
 * Return: 1 if a string is a palindrome
 *         0 if a string is not a palindrome
 */

int is_palindrome(char *s)
{

	int len;

	len = len_str(s);

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s, len, 0));
	}

}
