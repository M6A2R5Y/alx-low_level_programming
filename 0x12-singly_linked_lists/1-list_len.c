#include "lists.h"
#include <stddef.h>


/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	/* Variable to keep track of the count*/
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
