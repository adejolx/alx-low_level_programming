#include <limits.h>
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting point
*/
void print_to_98(int n)
{
	int target = 98;

	if (n > INT_MAX || n < INT_MIN)
	n = 0;


	if (n > target)
	{
		while (n > target)
		{
			printf("%d", n);

			if (n != target)
				printf(", ");

			n--;
		}
	}
	else if (n < target)
	{
		while (n < target)
		{
			printf("%d", n);

			if (n != target)
				printf(", ");

			n++;
		}
	}

	if (n == target)
		printf("%d", n);

	printf("\n");
}

