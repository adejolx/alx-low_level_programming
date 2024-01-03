#include <stdio.h>

/**
* print_array - prints n elements of
* an array of integers followed by a new line
* @a: The array of integers
* @n: The number of elements to print
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (*(a + i) && i < n)
	{
		printf("%d", *(a + i));

		if (i !=  n - 1)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
