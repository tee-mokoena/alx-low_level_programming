#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to check
 * Return: 1 for Success, 0 for otherwise
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else
		return (0);
}
