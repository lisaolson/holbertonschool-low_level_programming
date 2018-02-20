#ifndef DOG_H
#define DOG_H

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} DOG;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
