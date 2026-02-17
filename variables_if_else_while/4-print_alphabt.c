#include <stdio.h>

/**
 * main - prints the alphabet in lowercase while avoiding q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* First loop, lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')

	{
		putchar(ch);
	}

	}

	/* FINAL USE */

	putchar('\n');

	return (0);
}
