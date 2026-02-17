#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Start at 'z'; keep going as long as ch is 'a' or bigger; go down by 1 */
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch); /* FIRST USE */
	}

	putchar('\n'); /* SECOND USE */

	return (0);
}
