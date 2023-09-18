#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int sum;
	int n;

	srand(time(NULL));
	while (sum <= 2645)
	{
		n = rand() % 128;
		sum += n;
		putchar(n);
	}
	putchar(2772 - sum);
	return (0);
}
