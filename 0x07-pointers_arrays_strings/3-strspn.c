#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: str
 * @accept: bytes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != s[a]; b++)
		{
			if (accept[b] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
