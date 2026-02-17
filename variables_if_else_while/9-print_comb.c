#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* #1: The number */

		/* If n is NOT 9, print the comma and space */
		if (n != 9)
		{
			putchar(','); /* #2: The comma */
			putchar(' '); /* #3: The space */
		}
	}

	putchar('\n'); /* #4: The newline */

	return (0);
}
