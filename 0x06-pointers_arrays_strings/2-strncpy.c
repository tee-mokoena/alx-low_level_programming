#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
	}
	return (dest);
}
