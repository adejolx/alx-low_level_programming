#include <stdio.h>

/**
 * prime_factor - prints the largest prime factor
 * of 612852475143 followed by a new line
 */

void prime_factor(void)
{
	unsigned long div = 2, num = 612852475143;

	while (num > 1)
	{
		while (num % div == 0)
			num = num / div;
		div++;
	}
	printf("%lu\n", div);
}

/**
 * main - calls prime_factor
 * Return: 0 Always (Success)
 */

int main(void)
{
	prime_factor();
	return (0);
}
