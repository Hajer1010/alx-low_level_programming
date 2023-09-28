#include "main.h"
/**
 * is_prime_number - checks prime number
 * @n: num
 * Return: 0 1
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0 && i > 0)
			return (0);
		if (i == 1)
			return (1);
	return (is_prime_number(n, i + 1));
}

