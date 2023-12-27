#include <stdio.h>

/**
 * main - prints the sum of the multiple of 3 or 5
 * below 1024 (excluded) followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ceil = 1024, i, sum = 0;

	for (i = 0; i < ceil; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
