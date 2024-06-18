#include <stdio.h>

/**
* main -  prints all single digit numbers of base 10 starting from 0,
*         followed by a new line.
*         You can only use the putchar function
* Return: value 0
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; ++num)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
