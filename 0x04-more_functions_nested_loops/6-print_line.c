#include "main.h"
#include <limits.h>
/**
 * print_line - print the _ character n times
 * @n: number of times to print _ character
*/

void print_line(int n)
{
	if (n > 0 && n < INT_MAX)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
