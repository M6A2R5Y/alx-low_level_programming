#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	/* Iterate through the linked list*/
	while(head)
	{
		/* Store the next node in a temporary variable*/
		temp = head->next;
		/* Free the current node*/
		free(head);
		head = temp;
	}
}
