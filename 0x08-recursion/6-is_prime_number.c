#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks prime number
 * @n: num
 * @i: num
 * Return: 0 1
 */
int prime_num(int n, int i);
int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
/**
 * prime_num - checks prime num
 * @i: num
 * @n: num
 * Return: int
 */
int prime_num(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime_num(n, i + 1));
}
