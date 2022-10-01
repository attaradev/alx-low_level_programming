#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number or 1
 */
int isNum(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}

	return (0);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: array pointer that holds the arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
				printf("Error\n");
		}
		printf("%d\n", sum);
	}

	return (0);
}
