#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, status;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		status = 0;

		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				status = 1;
				break;
			}
		}

		if (status == 0)
			break;
	}

	return (i);
}
