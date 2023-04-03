#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable type struct dog
 * @d: pointer to struct dog
 * @name: element 1
 * @age: element 2
 * @owner: element 3
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
