#include "main.h"
/**
 * create_array- creates an array of chars
 * @size:size
 * @c: char
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);

	while (size--)
		ptr[size] = c;
	return (ptr);
}
