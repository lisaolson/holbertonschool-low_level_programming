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
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	if (d == NULL)
		exit(1);
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
