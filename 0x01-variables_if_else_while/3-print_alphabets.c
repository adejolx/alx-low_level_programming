#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then in uppercase
 * followed by a new line
 * Description: increments the ascii code to print successive letters
 * Return: Always 0 (Success)
*/
int main(void)
{
	int lower_case_begin = 97;
	int lower_case_end = 122;
	int upper_case_begin = 65;
	int upper_case_end = 90;

	while (lower_case_begin <= lower_case_end)
	{
		putchar(lower_case_begin);
		lower_case_begin++;
	}

	while (upper_case_begin <= upper_case_end)
	{
		putchar(upper_case_begin);
		upper_case_begin++;
	}
		putchar(10);

	return (0);
}
