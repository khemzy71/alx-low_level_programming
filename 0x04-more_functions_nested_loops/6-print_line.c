#include "main.h"

/**
 * print_line - print the character "_" n times
 * @n: number of character to drew
 */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
