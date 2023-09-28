#include <unistd.h>
#include "main.h"
/**
 * _putchar-writes the char to stdout
 * @c: the char to print
 * Return:1 -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
