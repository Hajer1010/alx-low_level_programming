#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints the alphabet in lowercase,in new line
 * Return: 0
 */
int main(void)
{	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		ch++;
	}
		putchar('\n');
	return (0);

}