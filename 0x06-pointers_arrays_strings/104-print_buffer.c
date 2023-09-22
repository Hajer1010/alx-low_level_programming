#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time,
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", i);
		for (y = 0; y < 10; y++)
		{
			if ( x+ y < size)
				printf("%02x", b[x + y]);
			else
				printf("  ");
			if (x % 2)
				printf(" ");
		}
		for (z = 0; z < 10; z++)
		{
			if (i + z < size)
			{
				if (b[x + z] >= 32 && b[x + z] <= 126)
					printf("%c", b[x + z]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
