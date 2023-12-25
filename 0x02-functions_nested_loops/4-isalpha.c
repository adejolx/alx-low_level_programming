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

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int uppercase_begin = 65;
	int uppercase_end = 90;
	int i;

	for (i = uppercase_begin; i <= uppercase_end; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if character is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (_isupper(c) || _islower(c))
	{
		return (1);
	}

	return (0);
}
