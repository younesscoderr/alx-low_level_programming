#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that defines a dog
 * @name: the name of the dog
 * @age: the age of the dog in years
 * @owner: the name of the dog's owner
 *
 * Description: This structure is used to store information about a dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
