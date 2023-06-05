#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Returns: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	/* Declare a variable to store the number of nodes*/
	size_t num = 0;
	/* Iterate through the linked list*/
	while (h)
	{
		/* Increment 'num'*/
		num++;
		/* Move on to the next node*/
		h = h->next;
	}
	/* Return 'num'*/
	return (num);
}
