#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints the alphabet in in reverse,in new line
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
