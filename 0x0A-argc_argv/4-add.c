#include <stdio.h>
#include <stdlib.h>
/**
 * main-entrypint
 * @argv:string
 * @argc: int
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
