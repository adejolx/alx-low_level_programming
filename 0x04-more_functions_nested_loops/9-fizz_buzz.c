#include <stdio.h>

/**
 * fizz_buzz - counts from 1 to 100
 * and replaces multiples of 3 with Fizz, of 5 with Buzz,
 * and of both with FizzBuzz
 */

void fizz_buzz(void)
{
	int _ceil = 100, _floor = 1, i;

	for (i = _floor; i <= _ceil; i++)
	{
		if (i != _floor)
			printf("%c", ' ');

		printf("%d", i);

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", " FizzBuzz");
			i++;
		}

		else if (i % 3 == 0)
		{
			printf("%s", " Fizz");
			i++;
		}

		else if (i % 5 == 0)
		{
			printf("%s", " Buzz");
			i++;
		}
	}
	printf("\n");
}

/**
 * main - calls the fizz_buzz function
 * Return: Always 0 (Success);
*/
int main(void)
{
	fizz_buzz();
	return (0);
}
