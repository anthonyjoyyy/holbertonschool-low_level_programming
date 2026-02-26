#include "main.h"
#include <stdio.h>
/**
 * print_array - printing the array values
 * @a: string to be printed
 * @n: number of characters in the string
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{

	if (i < n - 1)
	{
		printf("%d, ", a[i]);
	}
		else
		{
			printf("%d\n", a[i]);
		}
	}


}
