#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints the alphabet in lowercase,in new line
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
