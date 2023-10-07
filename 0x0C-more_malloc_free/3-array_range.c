#include "main.h"
/**
 * *array_range-entry point
 * @min: num
 * @max: num
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
	{
		return (NULL);
	}

	len = min + max + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}

