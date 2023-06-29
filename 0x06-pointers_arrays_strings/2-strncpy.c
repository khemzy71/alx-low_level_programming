#include "main.h"

/**
 * _strncpy - copies n bytes of a sourceinto buffer of a string
 * @dest:copy source to buffer
 * @src: the source to copy
 * @n: bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
