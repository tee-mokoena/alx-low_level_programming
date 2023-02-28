#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: input
 * if odd length = length of the string / 2
 * _putchar - writes the character c to stdout
 * Return: print half of input
 */

void puts_half(char *str)
{
	int a;
	int n;
	int longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		longi++;

			n = (longi / 2);
	}
	if ((longi % 2) == 1)
	{
		n = ((longi + 1) / 2);
	}

			for (a = n; str[a] != '\0'; a++)
			{
				putchar(str[a]);
			}
	putchar('\n');
}

