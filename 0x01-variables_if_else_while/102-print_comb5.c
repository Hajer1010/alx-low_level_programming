#include <stdio.h>
/**
 * main-entry point
 * Description:program that prints the alphabet in lowercase,in new line
 * Return: 0
 */
int main(void)
{
	int fnum = 0, snum;

	while (fnum <= 99)
	{
		snum = fnum;
		while (snum <= 99)
		{
			if (snum != fnum)
			{
				putchar((fnum / 10) + 48);
				putchar((fnum % 10) + 48);
				putchar(' ');
				putchar((snum / 10) + 48);
				putchar((snum % 10) + 48);

				if (fnum != 98 || snum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			snum++;
		}
		fnum++;
	}
	putchar('\n');
	return (0);
}
