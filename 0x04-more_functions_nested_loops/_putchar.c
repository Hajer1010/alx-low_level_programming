#include "main.h"
#include <unistd.h>
/**
 * _putchar-writes the char to stdout
 * @c: the char to print
 * Return:1 on success -1 on error
 */
int _puthchar(char c)
{
	return (write(1, &c, 1));
}
