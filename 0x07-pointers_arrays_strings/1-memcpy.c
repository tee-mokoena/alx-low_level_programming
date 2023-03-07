#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: memory where result is stored
 * @src: the memory area where the bytes are copied from
 * @n: the number of bytes to be copied
 * Return: the copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int i = n;

	for (; k < i; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}
