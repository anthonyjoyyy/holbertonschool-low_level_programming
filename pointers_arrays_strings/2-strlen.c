#include <string.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string being passed in
 *
 * Return: length of string
 */
int _strlen(char *s)
{	int length = 0;
while (s[length] != '\0')
{
	length++; /*move to next character */
}

	return (length);
}
