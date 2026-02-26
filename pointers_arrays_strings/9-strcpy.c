#include "main.h"
/**
 * _strcpy - copy the string to a new destination
 * @dest: location we are copying the value to
 * @src: where we are copying the value from
 *
 * Return: the value of destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

while (src[i] != '\0')
{

	dest[i] = src[i];


	i++;
}
dest[i] = '\0';
		return (dest);
}
