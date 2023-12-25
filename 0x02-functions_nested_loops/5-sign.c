#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */

int print_sign(int n)
{
	int plus = 43;
	int minus = 45;
	int zero = 48;

	if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}

	if (n == 0)
	{
		_putchar(zero);
		return (0);
	}

	_putchar(plus);
	return (1);
}
