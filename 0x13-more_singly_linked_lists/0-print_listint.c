#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes below is the code
 */
size_t print_listint(const listint_t *h)
{
	size_t incre = 0;

	while (h)
	{
		printf("%d\n", h->n);
		incre++;
		h = h->next;
	}

	return (incre);
}
