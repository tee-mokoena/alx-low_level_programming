#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *)
{
	int i;
	char n;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[1] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
