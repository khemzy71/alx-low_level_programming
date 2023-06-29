#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a:array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int tmp, bag = 0;
	int end = n - 1;

	while (bag < end)
	{
		tmp = *(a + bag);
		*(a + bag) = *(a + end);
		*(a + end) = tmp;
		bag++;
		end--;
	}
}
