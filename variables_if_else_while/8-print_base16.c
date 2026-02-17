#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Loop for numbers 0 to 9 */
	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	/* Loop for letters a to f */
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	/* Final newline */
	putchar('\n');

	return (0);
}
