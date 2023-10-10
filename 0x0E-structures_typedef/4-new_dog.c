#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		++length;
	return (length);

}
/**
 * _strncpy -  a function that copies a string.
 * @dest: ptr to dest
 * @src: ptr to src
 * Return: copied str
 */
char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog- entry point
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strncpy(d->name, name);
	d->age = age;
	d->owner = _strncpy(d->owner, owner);

	return (d);
}
