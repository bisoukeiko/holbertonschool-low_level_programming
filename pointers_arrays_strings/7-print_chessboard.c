#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @:a The chessboard to be printed
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int index1;
	int index2;

	for (index1 = 0; index1 < 8; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			_putchar(a[index1][index2]);
		}

		_putchar('\n');
	}


}
