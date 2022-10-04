#include <stdlib.h>
#include "main.h"

/**
 * length - calculate length of string
 * @str: string
 * Return: length of the string
 */
int length(char *str)
{
	int len = 0;

	while (str && str[len])
		len++;

	return (len);
}

/**
 * word_count - counts the number of words in string
 * @str: string
 * Return: number of words
 */
int word_count(char *str)
{
	int i = 0, words = 0;

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
	char **words;
	int i, j = 0, temp = 0, size = 0, num_word = word_count(str);

	if (num_word == 0 || str == " ")
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (num_word + 1));
	if (words != NULL)
	{
		for (i = 0; i <= length(str) && num_word; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				words[j] = (char *)malloc(sizeof(char) * size + 1);
				if (words[j] != NULL)
				{
					while (temp < size)
					{
						words[j][temp] = str[(i - size) + temp];
						temp++;
					}
					words[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(words[j]);
					free(words);
					return (NULL);
				}
			}
		}
		words[num_word] = NULL;
		return (words);
	}
	else
		return (NULL);
}
