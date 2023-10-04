#include "main.h"
/**
 * _strdup-return ptr
 * @str: string
 * Return: ptr
 */
char *_strdup(char *str)
{
	int i = 0, z = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[z] != '\0'; z++)
		;

	char *ptr = malloc(z * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < z; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}

