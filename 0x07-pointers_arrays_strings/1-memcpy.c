#include "main.h"
/**
 * *_memcpy - a function that copies memory area.
 * @src: sourse
 * @dest: memory area
 * @n: lenght
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int a = 0;

	while (n > a)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
