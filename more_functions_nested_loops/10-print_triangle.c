#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++) /* Loop for each ROW */
		{
			/* Inner Loop 1: Print the SPACES */
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			/* Inner Loop 2: Print the HASHES */
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
