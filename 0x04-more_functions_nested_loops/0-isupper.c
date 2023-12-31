#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int upperc_begin = 65, upperc_end = 90, i = upperc_begin;

	while (i >= upperc_begin && i <= upperc_end)
	{
		if (i == c)
			return (1);
		i++;
	}
	return (0);
}
