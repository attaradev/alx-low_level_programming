#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @str: string parameter
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	while (str[++i])
	{
		char c;

		c = str[i];

		while (!(c >= 'a' && c <= 'z'))
			i++;

		c = str[i - 1];
		if (c == ' ' || 
		    c == '\t' || 
		    c == '\n' || 
		    c == ',' || 
		    c == ';' || 
		    c == '.' || 
		    c == '!' || 
		    c == '?' || 
		    c == '"' || 
		    c == '(' || 
		    c == ')' || 
		    c == '{' || 
		    c == '}')
			str[i] -= 32;
	}

	return (str);
}
