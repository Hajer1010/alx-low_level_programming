#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks prime number
 * @n: num
 * Return: 0 1
 */
int is_prime_number(int n)
{
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			return (0);
		else
			return (1);
	}
}
