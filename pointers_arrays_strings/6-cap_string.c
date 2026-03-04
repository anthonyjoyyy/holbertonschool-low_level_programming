#include "main.h"
/*
 * cap_string - capitalizes all new words
 *
 * @str: string to capitalize
 *
 * Return: a string with the first letter of each word beginning with a capital
 */
char *cap_string(char *str)
{
	char str;
	int i = 0;


		while (str[i] != '\0')
	{
		if (str[i] == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
		{
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			}
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

Return: (str);
}
