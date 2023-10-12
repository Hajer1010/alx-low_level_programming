#include "variadic_functions.h"
/**
 * sum_them_all- function
 * @n: unsigned int
 * @...: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, unsigned int);
	va_end(ptr);

	return (sum);
}


