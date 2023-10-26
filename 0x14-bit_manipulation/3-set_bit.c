#include "main.h"
/**
 * set_bit - functin
 * @n: num
 * @index: index
 * Return: the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
