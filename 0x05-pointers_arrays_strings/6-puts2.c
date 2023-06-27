#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * puts2 - print every second characterof a string
 * @str: string to print
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0' && x < _strlen(str); x +=2)
		_putchar(str[x]);
	_putchar('\n');
}
