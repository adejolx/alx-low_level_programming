#include "main.h"
#include <limits.h>

/**
 * print_number - prints integers
 * Description: if integer is > 10, a recursive
 * means is used to print it in the correct order
 * @n: an integer to be printed to stdout
 */

void print_number(int n)
{
	int units;

	if (n >= INT_MIN && n <= INT_MAX)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if ((n / 10) > 0)
		{
			print_number(n / 10);
			units =	n % 10;
			_putchar('0' + units);
		}
		else
		_putchar('0' + n);
	}
	else
	_putchar('0');
}
