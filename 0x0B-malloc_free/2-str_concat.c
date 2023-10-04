#include "main.h"
/**
 * strlen-string length
 * @s: string
 * Return: int
 */
int strlen(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	;
	return (z);
}
/**
 * str_concat- concatenates two strings.
 * @s1: str1
 * @s2: str2
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int si1, si2, i;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	si1 = strlen(s1);
	si2 = strlen(s2);
	ptr = malloc((si1 + si2) * sizeof(char) + 1)
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i <= si1 + si2; i++)
	{
		if (i < si1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - si1];
	}
	ptr[i] = '\0';
	return (ptr);
}
