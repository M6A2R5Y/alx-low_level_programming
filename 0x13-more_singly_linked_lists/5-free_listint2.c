#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	/* Check if the pointer is NULL*/
	if (head == NULL)
	{
		return;
	}
	/*Iterate through the linked list*/
	while (*head)
	{
		/*Store the next node in a temporary variable*/
		temp = (*head)->next;
		/*Free the current node*/
		free(*head);
		/*Move to the next node*/
		*head = temp;
	}
	/* Set the head pointer to NULL*/
	*head = NULL;
}
