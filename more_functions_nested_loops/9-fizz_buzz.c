#include <stdio.h>

/**
 * main - prints 1 to 100 with FizzBuzz logic
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		/* This MUST be inside the for-loop brackets */
		if (i < 100)
		{
			printf(" ");
		}
	} /* This bracket ends the FOR loop */

	printf("\n"); /* This is outside the loop */
	return (0);   /* This is outside the loop */
} /* This bracket ends the MAIN function */
