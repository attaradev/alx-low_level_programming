#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded string
 */
char *rot13(char *str)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x = 0;

	while (str[x])
	{
		int y;

		for (y = 0; y < 52; y++)
		{
			if (str[x] == alph[y])
			{
				str[x] = rot[y];
				break;
			}
		}

		x++;
	}
	return (str);
}
