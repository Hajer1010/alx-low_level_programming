#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @accept: string to find
 * @s: string
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{

	unsigned int a, b;
	char *p;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
		}
	}
	return (0);
}
