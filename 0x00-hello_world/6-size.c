#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of int: %zu bytes\n", sizeof(long long int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(long int));
	printf("Siize of char: %zu byte\n", sizeof(char));
	return (0);
}
