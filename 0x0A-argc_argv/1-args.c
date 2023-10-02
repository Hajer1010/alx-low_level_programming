#include <stdio.h>
/**
 * main- entry point
 * @argc: counter
 * @argv: string
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
