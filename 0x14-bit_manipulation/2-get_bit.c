#include "main.h"
/**
 * get_bit - function
 * @n: num
 * @index: index
 * Return: -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
