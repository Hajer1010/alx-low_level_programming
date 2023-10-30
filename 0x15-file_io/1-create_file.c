#include "main.h"
/**
 * _strlen-string length
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int z;

	if (!s)
		return (0);
	for (z = 0; s[z] != '\0'; z++)
	;
	return (z);
}
/**
 * create_file - creat file
 * @filename: file name
 * @text_content: text
 * Return: 1 0
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t b = 0, ln = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (ln)
		b = write(f, text_content, ln);
	close(f);
	return (b == ln ? 1 : -1);
}
