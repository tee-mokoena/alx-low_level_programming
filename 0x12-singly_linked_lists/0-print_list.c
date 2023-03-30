#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
