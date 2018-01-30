#include "holberton.h"

/**
 * swap_int - swap the values of two int
 *
 *@n: int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
