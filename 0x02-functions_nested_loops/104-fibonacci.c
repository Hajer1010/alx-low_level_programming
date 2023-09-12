#include "main.h"
/**
 * numlength-return the length
 * @num: input
 * Return: number of digits
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main-entry point
 * Return: 0
 */
int main(void)
{
	int count, init;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f10 > 0)
			printf("%lu", f10);
		init = numlength(mx) - 1 - numlength(f1);
		while (f10 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f10 + f20 + (f1 + f2) / mx;
		f1 = f2;
		f10 = f20;
		f2 = sum;
		f20 = sumo;
		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
