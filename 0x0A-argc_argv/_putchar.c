#include "main.h"
#include <stdio.h>

/**
 * _putchar - wrties the character c to stdout
 * @c: the character to print out
 * Return: 1 Success; -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
