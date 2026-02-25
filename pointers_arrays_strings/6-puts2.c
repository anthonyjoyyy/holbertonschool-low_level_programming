#include "main.h"
/**
 * puts2 - printing every second character
 * @str: string which character is derived from
 *
 */
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
