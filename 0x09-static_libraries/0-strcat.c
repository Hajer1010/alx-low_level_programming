#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int st1, st2;

	st1 = 0;
	while (dest[st1])
		st1++;
	for (st2 = 0; src[st2] ; st2++)
		dest[st1++] = src[st2];
	return (dest);
}
