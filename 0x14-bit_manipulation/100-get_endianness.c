#include "main.h"
/**
 * get_endianness - function
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
