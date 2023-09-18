#include "main.h"
/**
 * _puts -  prints a string, followed by a new line
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
