#include "main.h"
/**
 * read_textfile - function
 * @filename: file name
 * @letters: bytes to read
 * Return: num of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t b;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RONLY);
	if (f == -1)
		return (0);
	b = read(f, &buf[0], letters);
	b = write(STDOUT_FILENO, &buf[0], b);
	close(f);
	return (b);
}
