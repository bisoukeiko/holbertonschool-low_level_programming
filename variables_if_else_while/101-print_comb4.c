#include <stdio.h>

/**
* main -  print all possible different combinations of three digits
* Return: 0
*/

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 < 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{

			if (num1 < num2 && num1 != num2)
			{

				for (num3 = 0; num3 <=9; num3++)
				{

					if (num2 < num3 && num2 != num3 &&
					    num1 < num3 && num1 != num3)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(num3 + '0');

						if (num1 == 7 && num2 == 8 && num3 == 9)
						{
							continue;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}

		}

	}

	putchar('\n');

	return (0);

}
