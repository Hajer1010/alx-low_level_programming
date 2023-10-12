#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: string oparator
 * @n: int
 * @...: argumernts
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ptr;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	while (i--)
		printf("%s%s", (s = va_arg(ptr, char *)) ? s : "nil",
				i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
