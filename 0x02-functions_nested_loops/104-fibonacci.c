#include <stdio.h>

/**
 * int_length - calculates the length of an integer
 * @num: The integer which its length is to be calculated
 * Return: The length of num
 */
int int_length(int num)
{
	int len = 0;

	if (!num)
		return (1);

	while (num)
	{
		num = num / 10;
		len++;
	}

	return (len);
}

/**
 * main - prints the first 98 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Description: Because a fib sequence will eventually lead
 * to type overflow, the overflow denoted by *_over is computed
 * and concatenated with the non-overflow part. note that 10^8
 * used as the ceiling is arbitrarily large enough to cater for
 * the overflow requirements
 * Return: Always 0 (Success)
*/
int main(void)
{
	unsigned long i, n = 98, _ceil = 100000000,
	sum_over, f1_over = 0, f2_over = 0,
	sum, f1 = 1, f2 = 2, leading0s;

	for (i = 1; i <= n; i++)
	{
		if (f1_over > 0)
			printf("%lu", f1_over);

		leading0s = int_length(_ceil) - 1 - int_length(f1);

		while (f1_over > 0 && leading0s > 0)
		{
			printf("%d", 0);
			leading0s--;
		}

		printf("%lu", f1);

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
