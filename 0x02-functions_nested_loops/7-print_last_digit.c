#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer which its absolute value is to be computed
 * Return: the absolute value of n
*/
int _abs(int n)
{
	int neg_sign = -1;

	if (n < 0)
	{
		return (n * neg_sign);
	}
	return (n);
}

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number which its last digit is to be printed;
 * Return: The last digit of n
*/
int print_last_digit(int n)
{
	int ten = 10;
	int last_digit;
	int abs_n = _abs(n);

	if (abs_n < ten)
	{
		last_digit = abs_n;
	}
	else
	{
		last_digit = abs_n % ten;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
