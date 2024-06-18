#include <stdio.h>

/**
* main -  print the alphabet in lowercase, followed by a new line
*         print all the letters except q and e
* Return: value 0
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}
