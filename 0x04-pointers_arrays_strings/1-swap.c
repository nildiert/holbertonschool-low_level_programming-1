#include "holberton.h"

/**
 * swap_int - swap the values of two int
 *
 * @a: int 1
 * @b: int 2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
