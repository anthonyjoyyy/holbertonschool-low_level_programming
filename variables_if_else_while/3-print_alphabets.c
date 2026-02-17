#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* First loop, lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch); /* FIRST USE */
	}

	/*Second loop, uppercase */
	for (ch = 'A' ; ch <= 'Z'; ch++)
	{
		putchar(ch); /* SECOND USE */
	}

	/* FINAL USE */

	putchar('\n');

	return (0);
}
