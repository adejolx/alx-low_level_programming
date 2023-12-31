#include "main.h"
#include <limits.h>

/**
 * mul - multiplies two integers
 * @a: The first integer operand
 * @b: The second integer operand
 * Return: The product of a and b if not overflow, 0 otherwise
 */
int mul(int a, int b)
{
	int op1 = 0, op2 = 0, prod;

	if (a >= INT_MIN && a <= INT_MAX)
		op1 = a;

	if (b >= INT_MIN && b <= INT_MAX)
		op2 = b;

	prod = op1 * op2;

	if (prod < INT_MAX)
		return (prod);

	return (0);
}
