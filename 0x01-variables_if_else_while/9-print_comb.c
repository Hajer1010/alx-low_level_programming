#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints possible combinations
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
