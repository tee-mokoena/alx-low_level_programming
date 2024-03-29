#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicate string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		a[r] = str[r];
	}
	return (a);
}
