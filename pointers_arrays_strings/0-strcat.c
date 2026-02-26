#include "main.h"
/**
 * _strcat - joining two strings together
 * @src: string we're copying from
 * @dest: where we are pasting the characters
 *
 * Return: dest is the destination where we want the string to print
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
	dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
