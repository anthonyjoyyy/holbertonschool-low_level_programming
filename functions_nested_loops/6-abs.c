#include "main.h"
/**
 * _abs - find the absolute value of the integer
 * @n: the integer to check
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
