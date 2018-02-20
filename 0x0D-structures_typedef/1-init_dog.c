#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable of type struct dog
 * @d: pointer for dog struct
 * @name: char for name
 * @age: float for age
 * @owner: char for owner
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
