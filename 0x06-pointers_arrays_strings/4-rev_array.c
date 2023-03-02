#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * main - reverse an array
 * @a: input value
 * @n: input value
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
