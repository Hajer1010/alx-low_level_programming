#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: st1
 * @s2: st2
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int com = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			com = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (com);
}
