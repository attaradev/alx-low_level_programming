#include "main.h"

/**
 * leet - encode a string
 * @str: string parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int x, y;
	char lt[5][2] = {{'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}, {'L', '1'}};

	x = 0;
	while (str[x] != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			if (str[x] == lt[y][0] || str[x] - 32 == lt[y][0])
				str[x] = lt[y][1];
		}

		x++;
	}

	return (str);
}
