#include "main.h"
#include <limits.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times \ should be printed
*/

void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n > 0 && n < INT_MAX)
	{
		while (i < n)
		{
			while (j < i)
			{
				if (i != 0)
				{
					_putchar(' ');
				}
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		_putchar('\n');
}
