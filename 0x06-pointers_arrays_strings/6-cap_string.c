#include "main.h"
#include <stdio.h>
/**
 * isLower - function cheks if char is lowercase
 * @c: char
 * Return: 1 0
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - checks if assci is delimiter
 * @c: char
 * Return: 1 0
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
 * *cap_string -  function that capitalizes all words of a string
 * @s: char
 * Return: string
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int fdelimiter = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fdelimiter = 1;
		else if (isLower(*s) && fdelimiter)
		{
			*s -= 32;
			fdelimiter = 0;
		}
		else
			fdelimiter = 0;
		s++;
	}
	return (ptr);
}
