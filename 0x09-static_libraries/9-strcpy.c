/**
 * _strcpy - copy one pointer to another
 * @dest: varied to be copied to
 * @src: variable to copy
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		count++;
	}
	dest[count] = src[count];

	return (dest);
}
