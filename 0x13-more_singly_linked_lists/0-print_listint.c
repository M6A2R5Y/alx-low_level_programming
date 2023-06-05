#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	/* Iterate through the linked list*/
	while (h)
	{
		/* Print the value of the current node*/
		printf("%d\n", h->n);
		/* Increment the count of nodes*/
		num++;
		h = h->next;
	}
	/* Return the number of nodes */
	return (num);
}
