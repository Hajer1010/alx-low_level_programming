#include "main.h"
/**
 * *_strchr - function that locates a character in a string
 * @c: char
 * @s: string
 * Return: nothing
 */
char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	while (s[a] >= '\p')
	{
		if (s[a] == c)
		{
			return (s + a);
		}
		a++;
	}
	return ('\0');
}
