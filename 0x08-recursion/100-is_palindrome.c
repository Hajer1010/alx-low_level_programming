#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * @l: lenght
 * @n: index
 * Return: 0 1
 */
int is_palindrome(char *s)
{
	int l = 0;
	int n = strlen(s) - 1;

	while (n > l)
	{
		if
		{
			(s[l++] != s[n--])
				return (0);
		}
	}
	return (1);
}

