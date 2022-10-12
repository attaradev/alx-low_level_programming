#include <stdlib.h>
#include <strings.h>
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

	new_dog = malloc(sizeof(dog_t));
	name_copy = malloc(sizeof(name));
	owner_copy = malloc(sizeof(owner));

	if (name == NULL ||
	    owner == NULL ||
	    new_dog == NULL ||
	    name_copy == NULL ||
	    owner_copy == NULL)
		return (NULL);

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
