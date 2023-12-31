#include "main.h"
#include <limits.h>

/**
 * print_square - draws a diagonal line on the terminal
 * @n: the number of times \ should be printed
*/

void print_square(int n)
{
	int i = 0, j = 0;

	if (n > 0 && n < INT_MAX)
	{
		while (i < n)
		{
			while (j < n)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
	_putchar('\n');
}
