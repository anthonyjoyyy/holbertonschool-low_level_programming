#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	/* Only try to print underscores if n is positive */
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	/* This happens no matter what n is (even if it's 0 or negative) */
	_putchar('\n');
}
