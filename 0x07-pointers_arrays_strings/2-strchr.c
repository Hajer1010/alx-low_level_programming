#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @c: char
 * @s: string
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return ('\0');
}
