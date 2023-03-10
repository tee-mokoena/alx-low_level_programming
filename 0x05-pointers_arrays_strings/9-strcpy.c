#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string to the buffer
 * @dest: the destination of the copy
 * @src: the string to be copied
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';

	return (dest);
}
