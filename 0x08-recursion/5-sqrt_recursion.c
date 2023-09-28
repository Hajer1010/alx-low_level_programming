#include "main.h"
/**
 * squ_recursion - find square root
 * @n: num
 * @i: num
 * Return: int
 */
int squ_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squ_recursion(n, 0));
}
/**
 * squ_recursion - find square root
 * @n: num
 * @i: num
 * Return: int
 */
int squ_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squ_recursion(n, i + 1));
}
