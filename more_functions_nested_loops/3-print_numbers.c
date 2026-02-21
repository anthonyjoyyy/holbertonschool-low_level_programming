#include "main.h"

/**
 * print_numbers - print the numbers 0 to 9
 *
 * Return: numbers are printed from 0 through to 9 followed by a newline
 */

void print_numbers(void)
{
	int n;

for (n = '0'; n <= '9'; n++)
	{
	_putchar(n);
	}

	_putchar('\n');
}
