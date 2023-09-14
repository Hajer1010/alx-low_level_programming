#include "main.h"
/**
 * print_diagonal-a function that draws a diagonal line on the terminal
 * @n: number of times
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (i == j)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);
return (0);
}
