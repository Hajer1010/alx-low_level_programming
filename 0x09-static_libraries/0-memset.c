#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @n: bytes
 * @b: const
 * @s: pointer to the memory area
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++, n--;
	}
	return (s);
}
