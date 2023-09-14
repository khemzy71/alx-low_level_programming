#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: amount of arguments in the list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *s;

	if (n > 0)
	{
		va_start(valist, n);
		for (x = 1; x <= n; x++)
		{
			s = va_arg(valist, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (x != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
