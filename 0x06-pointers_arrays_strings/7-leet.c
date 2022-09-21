#include "main.h"

/**
 * leet - encode a string
 * @str: string parameter
 * Return: encoded string
 */
char *leet(char *str)
{
	int x, y;
	char leet[5][2] = {{'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}, {'L', '1'}};

	x = 0;
	
	while (str[++x])
	{
		for (y = 0; y < 8; y++)
		{
			if (str[x] == leet[y][0] || str[x] - 32 == leet[y][0])
				str[x] = leet[y][1];
		}
	}
	
	return (str);
}
