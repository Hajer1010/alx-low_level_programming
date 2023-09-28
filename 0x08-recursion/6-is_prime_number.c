#include "main.h"
/**
 * is_prime_number - checks prime number
 * @n: num
 * Return: 0 1
 */
int is_prime_number(int n)
{
	int i;
	for (i == 2; i <= n; i++)
	{
		if ( n % a == 0)
			return (0);
		else
			return (1);
	}
	return (is_prime_number(n, i + 1));
}
