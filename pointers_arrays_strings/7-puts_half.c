#include "main.h"
/**
 * puts_half - print half of a strings
 * @str: string we're looking at
 *
 */
void puts_half(char *str)
{
	int n;
	int length = 0;
	int start;

	{
		while (str[length] != '\0')

		{
			length++;
		}

			n = (length + 1) / 2;
		for (start = n; start < length; start++)
		{
			_putchar(str[start]);
		}
		_putchar('\n');

}
}
