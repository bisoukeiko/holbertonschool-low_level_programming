#include <stdio.h>

/**
* main -  print all possible different combinations of two digits
* Return: nothing 
*/

void main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{

		for (num2 = 0; num2 <=9; num2++)
		{

			if(num1 < num2)
			{
				if (num1 != num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
                                }

				if (num1 < 9 || num2 < 9)
				{
					putchar(',');
					putchar(' ');
				}
 
			}

		}

	}

}
