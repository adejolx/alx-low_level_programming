#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Description: Because a fib sequence will eventually lead
 * to type overflow, the overflow denoted by *_over is computed
 * and concatenated with the non-overflow part. note that 10^9
 * used as the ceiling is arbitrarily large enough to cater for
 * the overflow requirements
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned int i, n = 98, _ceil = 1000000000,
	sum_over, f1_over = 0, f2_over = 0,
	sum, f1 = 1, f2 = 2;

	for (i = 1; i <= n; i++)
	{
		if (f1_over > 0)
			printf("%u", f1_over);

		printf("%u", f1);

		sum_over = f1_over + f2_over + (f1 + f2) / _ceil;
		f1_over = f2_over;
		f2_over = sum_over;

		sum = (f1 + f2) % _ceil;
		f1 = f2;
		f2 = sum;

		if (i != 98)
			printf(", ");
	}

	printf("\n");
	return (0);
}
