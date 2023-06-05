#include "lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Create a temporary pointer to traverse the list*/
	listint_t *temp = *head;
	/*Create a pointer to the node to delete*/
	listint_t *current = NULL;
	/*Create a counter variable*/
	unsigned int i = 0;
	/*Check if the list is empty*/
	if (*head == NULL)
	{
		return (-1);
	}
	/*Check if the node to delete is the first node*/
	if (index == 0)
	{
		*head = (*head)->next;
		/*Free the memory of the deleted node*/
		free(temp);
		/*Return 1 (Success)*/
		return (1);
	}
	/*Traverse to the previous node of the node to delete*/
	while (i < index - 1)
	{
		/*Check if the list ends prematurely*/
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		/* Move to the next node*/
		temp = temp->next;
		i++;
	}
	/* Set the pointer to the node to delete*/
	current = temp->next;
	/*Update the next pointer of the previous node*/
	temp->next = current->next;
	/*Free the memory of the deleted node*/
	free(current);
	return (1);
}
