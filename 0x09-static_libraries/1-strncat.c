#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: ptr to dest
 * @src: ptr to src
 * @n: num of bytes
 * Return: result
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, i;

	s = 0;
	while (dest[s])
		s++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[s + i] = src[i];
	dest[s + i] = '\0';
	return (dest);
}
