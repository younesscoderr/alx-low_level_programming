#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: the variable to be initialized.
 * @name: the name of the dog
 * @age: the age of the dog in years
 * @owner: the name of the dog's owner
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
