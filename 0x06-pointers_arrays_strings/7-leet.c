#include "main.h"

/**
 * leet - encode a string
 * @str: string parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int x, y;
	char leet[8];
       
	leet[0] = 'O';
	leet[1] = 'L';
	leet[2] = '?';
	leet[3] = 'E';
	leet[4] = 'A';
	leet[5] = '?';
	leet[6] = '?';
	leet[7] = 'T';
	x = 0;

	while (str[++x])
	{
		for (y = 0; y < 8; y++)
		{
			if (str[x] == leet[y] || str[x] - 32 == leet[y])
				str[x] = '0' + y;
		}
	}

	return (str);
}
