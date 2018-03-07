#include "lists.h"

/**
 * beatmain - prints something before main
 *
 * Return: nothing
 */

void __attribute__ ((constructor)) beatmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
