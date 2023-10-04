#include "main.h"
/**
 * _strdup-return ptr
 * @str: string
 * Return: ptr
 */
char *_strdup(char *str)
{
	int i, z;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (z = 0; str[z] != '\0'; z++)
	;

	ptr = malloc(z * sizeof(*str) + 1);

	if (ptr == 0)
		return (NULL);
	else
	{
		for (i = 0; i < z; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}

