#include <stdio.h>

/**
 * main - prints the sum of even-valued fib terms
 * with values up to 4 million (4,000,000)
 * Return: Always 0 (Success)
*/
int main(void)
{
	int fib_one = 1, fib_two = 1, i, n = 50;
	long int next, prev, curr, sum, four_mill = 4000000;

	prev = fib_one;
	curr = fib_two;
	next = curr + prev;

	sum = next;
	for (i = 3; i <= n; i++)
	{
		prev = curr;
		curr = next;
		next = prev + curr;

		if (next % 2 == 0 && next <= four_mill)
		{
			sum += next;
		}
	}

	printf("%ld\n", sum);
	return (0);
}
