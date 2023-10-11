#include "function_pointers.h"
/**
 * array_iterator- executes a function given as a parameter
 * @size: is the size of the array
 * @array: ptr
 * @action: ptr
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
