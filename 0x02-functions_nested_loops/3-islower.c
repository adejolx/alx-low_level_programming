#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int lowercase_begin = 97;
	int lowercase_end = 122;
	int i;

	for (i = lowercase_begin; i <= lowercase_end; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
