#include "dog.h"
#include <string.h>
/**
 * init_dog-structure
 * @d :structure
 * @name: name
 * @owner: owner
 * @age: age
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	d->age = age;
	}
}
