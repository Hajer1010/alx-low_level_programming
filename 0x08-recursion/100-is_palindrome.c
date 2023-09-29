#include "main.h"
#include <string.h>
/**
 * strlen_rec - find string length
 * @s: string
 * Return: length
 */
int strlen_rec(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += strlen_rec(s + len);
	}

	return (len);
}
/**
 * palindrome - Checks if a string is a palindrome
 * @s: string
 * @len: length of string
 * @i: index
 * Return: 0 1
 */
int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome(s, len, i + 1));
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: 0 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen_rec(s);

	if (!(*s))
		return (1);

	return (palindrome(s, len, i));
}
