#include "variadic_functions.h"
/**
 * format_char - character
 * @separator: string
 * @ptr: ptr
 */
void format_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}
/**
 * format_int- integar
 * @separator: string
 * @ptr: ptr
 */
void format_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}
/**
 * format_float- float
 * @separator: string
 * @ptr: ptr
 */
void format_float(char *separator, va_list ptr)
{
	 printf("%s%f", separator, va_arg(ptr, double));
}
/**
 * format_string-string
 * @separator: string
 * @ptr: ptr
 */
void format_string(char *separator, va_list ptr)
{
	char *s = va_arg(ptr, char *);

	switch ((int)(!s))
	case 1:
		s = "(nil)";

	printf("%s%s", separator, s);
}
/**
 * print_all- anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list ptr;
	char *separator = "";

	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}

