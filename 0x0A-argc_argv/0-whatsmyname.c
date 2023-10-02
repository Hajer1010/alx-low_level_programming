#include <stdio.h>
/**
 * main - entry point
 * @argc: counter
 * @argv: array of string
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
