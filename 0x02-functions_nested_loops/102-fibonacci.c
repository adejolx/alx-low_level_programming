#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int fib_one = 1, fib_two = 1, i, n = 50;
	long int next, prev, curr;

	prev = fib_one;
	curr = fib_two;
	next = curr + prev;

	printf("%ld, ", curr);
	printf("%ld", next);

	for (i = 3; i <= n; i++)
	{
		printf(", ");

		prev = curr;
		curr = next;
		next = prev + curr;

		printf("%ld", next);
	}

	printf("\n");
	return (0);
}
