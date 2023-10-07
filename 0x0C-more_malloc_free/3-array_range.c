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

	len = min + max + 1;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}

