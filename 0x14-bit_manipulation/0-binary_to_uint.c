#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0;
	int a;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	while (b[len] != '\0')
		len++;
	len -= 1;

	a = 0;
	while (b[a])
	{
		if ((b[a] != '0') && (b[a] != '1'))
			return (sum);

		if (b[a] == '1')
			sum += (1 * (1 << len));
		a++;
		len--;
	}

	return (sum);
}
