#include "main.h"
/**
 * _isalpha - checks for an alphabetic character
 * @c: a letter
 *
 * Return: 1 if character is alphabetical, otherwise it returns a 0
 */

int _isalpha(int c);
{
	if (c >= 'A' && c<= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
