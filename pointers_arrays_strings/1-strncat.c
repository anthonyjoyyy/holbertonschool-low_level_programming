#include "main.h"
/**
 * _strncat - joining two strings together
 * @dest: first string
 * @src: second string
 * @n: characters
 * Return: dest will become the full string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
dest[i] = '\0';

	return (dest);
}
