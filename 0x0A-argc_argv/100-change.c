#include <stdio.h>
#include <stdlib.h>
/**
 * main-entrypint
 * @argv:string
 * @argc: int
 * Return: 0 1
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, mini = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				mini += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mini);
	}
	return (0);
}
