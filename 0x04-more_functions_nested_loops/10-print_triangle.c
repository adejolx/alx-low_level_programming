#include "main.h"
#include <limits.h>

/**
 * print_triangle - prints a triangle
 * @size: the number of lines to print
 */
void print_triangle(int size)
{
	int i = 1, j = 0, k = 0;

	if (size > 0 && size < INT_MAX)
	{
		while (i <= size)
		{
			while (j < (size - i))
			{
				_putchar(' ');
				j++;
			}
			while (k < i)
			{
				k++;
				_putchar('#');
			}
			_putchar('\n');
			i++;
			j = 0;
			k = 0;
		}
	}
	else
	_putchar('\n');
}
