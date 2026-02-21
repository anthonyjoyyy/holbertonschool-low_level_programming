#include "main.h"
/**
 * _isdigit - checks to see whether the character is a digit or not
 * @c: the character that is being checked
 *
 * Return: if c is a digit, then a 1 will be returned, otherwise it will be 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
