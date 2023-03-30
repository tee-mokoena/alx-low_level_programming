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
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			PRINTF("[0] (nil)\n");
		}
		else
		{
			printf("[%d} %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
