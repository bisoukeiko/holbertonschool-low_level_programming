#include <stdio.h>

/**
* main -  prints the lowercase alphabet in reverse,
*         followed by a new line.
*         You can only use the putchar function
* Return: value 0
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
