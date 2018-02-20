#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, strlen1, strlen2;
	dog_t *chava;

	chava = malloc(sizeof(dog_t));
	if (chava == NULL)
		return (NULL);
	for (strlen1 = 0; name[strlen1] != '\0'; strlen1++)
		{}

	chava->name = malloc(sizeof(char) * (strlen1 + 1));

	if (chava->name == NULL)
	{
		free(chava);
		return (NULL);
	}
	for (i = 0; i <= strlen1; i++)
		chava->name[i] = name[i];
	chava->age = age;
	for (strlen2 = 0; owner[strlen2] != '\0'; strlen2++)
		{}
	chava->owner = malloc(sizeof(char) * (strlen2 + 1));

	if (chava->owner == NULL)
	{
		free(chava->name);
		free(chava);
		return (NULL);
	}
	for (j = 0; j <= strlen2; j++)
		chava->owner[j] = owner[j];

	return (chava);
}
