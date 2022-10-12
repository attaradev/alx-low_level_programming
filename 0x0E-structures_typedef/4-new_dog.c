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
	int name_length = sizeof(name);
	int owner_length = sizeof(owner);
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(name_length);
	if (name_copy == NULL)
		return (NULL);
	for (i = 0; i < name_length; i++)
		name_copy[i] = name[i];

	owner_copy = malloc(owner_length);
	if (owner_copy == NULL)
		return (NULL);
	for (i = 0; i < owner_length; i++)
		owner_copy[i] = owner[i];

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
