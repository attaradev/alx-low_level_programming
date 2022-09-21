#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @str: string parameter
 * Return: string
 */
char *cap_string(char *str)
{
	int index;

	index = 0;
	
	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}

	return (str);
}
