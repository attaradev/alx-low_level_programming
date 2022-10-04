#include <stdlib.h>
#include "main.h"

/**
 * length - calculate length of string
 * @str: string to be counted
 * Return: length of the string
 */
int length(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * count_words - counts the number of words in string
 * @str: string
 * Return: number of words
 */
int count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (i <= length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			++i;
		else if (((str[i] == ' ') || (str[i] == '\0')) && (str[i - 1] != ' '))
		{
			++words;
			++i;
		}
		else
			++i;
	}

	return (words);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to the array of splitted words
 */
char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	split = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (split != NULL)
	{
		for (i = 0; i <= length(str) && num_words; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				split[j] = (char *)malloc(sizeof(char) * size + 1);
				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[(i - size) + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);

					return (NULL);
				}
			}
		}
		split[num_words] = NULL;
		return (split);
	}
	else
		return (NULL);
}
