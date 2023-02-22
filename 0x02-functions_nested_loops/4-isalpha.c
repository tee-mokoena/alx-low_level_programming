#include "main.h"
/**
 * _isalphs - checks for aplhabetic characters
 * Return: 1 if letter is lowercase, 0 if otherwise.
 * @c: The character in ASCII code..
 */
int _isalphs(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
