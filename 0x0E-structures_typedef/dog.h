#ifndef DOG_H
#define DOG_H
/**
 * struct dog-structure
 * @name: ptr
 * @age: float
 * @owner: ptr
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif