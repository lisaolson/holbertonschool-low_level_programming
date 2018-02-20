#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints out elements of struct
 * @d: pointer to struct dog
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
