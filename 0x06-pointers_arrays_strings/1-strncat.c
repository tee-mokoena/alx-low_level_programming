#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings except that it will use at most n bytes
 * @dest: destination
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
	       i++;
	       j++;
	}
	return (dest);
}
