#include <stdlib.h>
#include "dog.h"

/**
 * word_len - calculate length of given word
 * @word - given word
 * Return: length of given word
 */
int word_len(char *word)
{
	int length = 0;

	while (word != NULL && word[length])
		length++;

	return (length);
}

/**
 * new_dog - creates a new dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to newly created dog structure, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int name_length = word_len(name);
	int owner_length = word_len(owner);
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(name_length + 1);
	if (cpyname == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(owner_length + 1);
	if (cpyowner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
