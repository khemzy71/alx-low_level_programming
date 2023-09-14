#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints int
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints float
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	int x, y = 0;
	va_list valist;

	datatype choice[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	va_start(valist, format);
	while (format != NULL && format[y] != '\0')
	{
		x = 0;
		while (choice[x].letter != '\0')
		{
			if (choice[x].letter == format[y])
			{
				printf("%s", separator);
				choice[x].func(valist);
				separator = ", ";
			}
			x++;
		}
		y++;
	}
	va_end(valist);
	printf("\n");
}
