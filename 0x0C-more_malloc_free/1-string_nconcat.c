#include "main.h"
/**
 * *string_nconcat-entry point
 * @n: int
 * @s2: str
 * @s1: str
 * Return: nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int i, j, s1l, s2l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;
	ptr = malloc(s1l + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
