#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - write alphabet in lowercase
 * @c: variable
 * Return: Always  c
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
