#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Start at 'a', keep going as long as we haven't passed 'z' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /* FIRST USE */
	}

	putchar('\n'); /* SECOND USE */

	return (0);
}
