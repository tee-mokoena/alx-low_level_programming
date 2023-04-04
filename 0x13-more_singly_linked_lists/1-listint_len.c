#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}

