#include <stdio.h>

/**
* main -  prints all the numbers of base 16 in lowercase,
*         followed by a new line.
*         You can only use the putchar function
* Return: value 0
*/

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
