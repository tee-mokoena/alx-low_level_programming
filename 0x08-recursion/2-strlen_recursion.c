#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: input
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit += _strlen_recursion(s + 1);
		longit++;
	}
	return (longit);
}
