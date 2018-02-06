#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: dereferenced point
 * @to: destination for set value
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
