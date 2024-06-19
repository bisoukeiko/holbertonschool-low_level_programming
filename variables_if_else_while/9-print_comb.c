#include <stdio.h>

/**
* main -  prints all possible combinations of single-digit numbers.
*         Numbers must be separated by ,, followed by a space
*         Numbers should be printed in ascending order
*         You can only use the putchar function
* Return: value 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

