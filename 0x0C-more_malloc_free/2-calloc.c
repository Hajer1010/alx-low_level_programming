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
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
/**
 * *_calloc-entry point
 * @nmemb: int
 * @size: size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == 0)
	{
		return (NULL);
	}
	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}

