#include "main.h"
/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: type string
 * @src: type string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');

	return (dest);
}
