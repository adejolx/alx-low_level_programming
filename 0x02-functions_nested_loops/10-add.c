#include <limits.h>

/**
 * add - adds two integers and returns the result
 * @a: the first integer
 * @b: the second integer
 * Return: The sum of a and b
 */
int add(int a, int b)
{
	if (a > INT_MAX)
	a = 0;
	if (b > INT_MAX)
	b = 0;

	return (a + b);
}
