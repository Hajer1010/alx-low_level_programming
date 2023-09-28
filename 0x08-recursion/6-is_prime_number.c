#include "main.h"
/**
 * is_prime_number - checks prime number
 * @n: num
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
	if (n % i == 0 || n <= 1)
		return (0);
	else if (i >= n && n > 1)
		return (1);
	else
		return (prime_number(n, i + 1));
}

