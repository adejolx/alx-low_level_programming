#include <stdio.h>

/**
 * main - Print the size of various types on the computer it is compiled on
 * Return: 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of a int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}