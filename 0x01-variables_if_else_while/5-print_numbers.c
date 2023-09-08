#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints all single digit numbers,in new line
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}
	printf("\n");
	return (0);
}

