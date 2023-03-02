#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: input value
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

