#include "main.h"

/**
 * _isdigit - checks for digit (0 - 9)
 * @c: The digit to be checked
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	int digit_begin = 48, digit_end = 57, i = digit_begin;

	while (i >= digit_begin && i <= digit_end)
	{
		if (i == c)
			return (1);
		i++;
	}
	return (0);
}
