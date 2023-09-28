#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, one, i;
	int x = 0;

	if (b == 0)
		return (0);


	while (b[x] != 0)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}

	x = x - 1;

	for (i = 0; x >= 0; i++, x--)
	{
		if (b[x] == '0')
			one = 0;
		else if (b[x] == '1')
			one = 1;
		one = one << i;
		res = res | one;
	}
	return (res);
}
