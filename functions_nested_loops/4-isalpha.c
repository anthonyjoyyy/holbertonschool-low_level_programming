#include "main.h"
/**
 * _isalpha - checks for an alphabetic character
 * @c: the character to be checked
 *
 * Return: 1 if character is alphabetical, otherwise it returns a 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
