#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @b: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *b, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = b[n - 1 - index];
		b[n - 1 - index] = b[index];
		b[index] = tmp;
	}
}
