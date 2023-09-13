#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to search the functions that need to be executed
 * Return: index where integer's found, -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
		if (cmp(*(array + a)))
			return (a);

	return (-1);

}
