#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: integer to be swapped with b
 * @b: integer to be swapped with a
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
