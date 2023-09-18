#include "main.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: reverse string
 */
void rev_string(char *s)
{
	int x, y;
	int str;

	for (x = 0; s[x] != '\0'; ++x)
		;
	for (y = 0; y < x / 2; y++)
	{
		str = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = str;
	}


}
