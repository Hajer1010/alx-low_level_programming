#include "main.h"
/**
 * _strlen-string length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int z;

	for (z = 0; s[z] != '\0'; z++)
	;
	return (z);
}
/**
 * *argstostr-  concatenates all the arguments
 * @ac: int
 * @av: argumantes
 * Return:str
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, cm = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, n++)
		n += _strlen(av[i]);

	s = malloc(sizeof(char) * n + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cm++)
			s[cm] = av[i][j];
		s[cm] = '\n';
		cm++;
	}
	s[cm] = '\0';
	return (s);
}
