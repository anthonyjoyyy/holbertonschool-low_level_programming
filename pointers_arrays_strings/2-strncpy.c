#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string we are copying to
 * @src: string we are copying from
 * @n: characters
 *
 * Return: destination will be src string, sometimes with null terminator
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
