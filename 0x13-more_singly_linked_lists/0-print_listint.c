#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: a singly linked list
 *
 * Return: number of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
