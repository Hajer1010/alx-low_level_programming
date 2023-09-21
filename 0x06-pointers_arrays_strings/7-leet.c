#include "main.h"
/**
 * leet - encode a string to 1337
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	char *sp = s;
	int value[] = {'A', 'E', 'O', 'T', 'L'};
	char key[] = {4, 3, 0, 7, 1};
	unsigned int n;

	while (*s)
	{
		for (n = 0. n < sizeof(key) / sizeof(char); n++)
		{
			if (*s == key[n] || *s == key[n] + 32)
			{
				*s = 48 + value[n];
			}
		}
		s++;
	}
	return (sp);
}
