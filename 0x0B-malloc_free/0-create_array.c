#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: fill array values with this char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int x = 0;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (x < (int)size)
	{
		*(arr + x) = c;
		x++;
	}
	*(arr + x) = '\0';

	return (arr);
}
