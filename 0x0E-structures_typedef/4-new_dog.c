#include <stdlib.h>
#include "dog.h"

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
	char *name_copy, *owner_copy;
	int name_length = 0, owner_length = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_length])
		name_length++;
	while (owner[owner_length])
		owner_length++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_length + 1);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';

	owner_copy = malloc(owner_length + 1);
	if (owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
