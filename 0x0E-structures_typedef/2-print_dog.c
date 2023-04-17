#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 * @d: a struct to be printed.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "nil";
	}
	if (d->age == -1.0)
	{
		printf("nil\n");
	}
	if (d->owner == NULL)
	{
		d->owner = "nil";
	}
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
