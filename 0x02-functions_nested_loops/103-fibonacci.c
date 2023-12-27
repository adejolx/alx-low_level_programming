#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
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
