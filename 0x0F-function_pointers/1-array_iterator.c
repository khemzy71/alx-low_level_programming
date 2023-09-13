#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to functionthat we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
		for (x = 0; x < size; x++)
			action(*(array + x));
}
