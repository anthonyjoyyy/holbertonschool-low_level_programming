#include "main.h"
/**
 * _strcmp - comparing two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if succesful, anything else means unsuccesful
 */
int _strcmp(char *s1, char *s2)
{	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
