#include <stdlib.h>

/**
 * argstostr - concatenate all the arguments of the program 
 * @ac: argument count
 * @av: pointer to array
 * Return: pointer of array
 *         NULL if ac == 0 or av == NULL or if program fails
 */

char *argstostr(int ac, char **av)
{

	int indexR, indexC, indexS;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (indexR = 0; indexR < ac; indexR++)
	{
		for (indexC = 0; av[indexR][indexC] != '\0'; indexC++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + 1 + ac));

	if (str == NULL)
	{
		return (NULL);
	}

	indexS = 0;

	for (indexR = 0; indexR < ac; indexR++)
	{
		for (indexC = 0; av[indexR][indexC] != '\0'; indexC++)
		{
			str[indexS] = av[indexR][indexC];
			indexS++;
		}

		str[indexS] = '\n';
		indexS++;
	}

	str[indexS] = '\0';

	return (str);

}
