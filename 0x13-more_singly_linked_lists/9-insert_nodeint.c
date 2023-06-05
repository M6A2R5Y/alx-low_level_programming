#include "lists.h"
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*Declare an unsigned integer variable to keep track of the current index.*/
	unsigned int i;
	/* Declare a pointer to the new node*/
	listint_t *new;
	/*Declare a pointer to the current node*/
	listint_t *temp = *head;
	/* Allocate memory for the new node*/
	new = malloc(sizeof(listint_t));
	/* Check if the allocation failed.*/
	if (!new || !head)
	{
		/* If the allocation failed, return NULL.*/
		return (NULL);
	}
	/* Initialize new node*/
	new->n = n;
	new->next = NULL;
	/*Check if the new node should be inserted at the beginning*/
	if (idx == 0)
	{
		/* Make the new node point to the current head*/
		new->next = *head;
		/* UPdate the head to point to the new node*/
		*head = new;
		/*return the pointer to the new node*/
		return (new);
	}
	/* Traverse to the desired position*/
	for (i = 0; temp && i < idx; i++)
	{
		/* If the previous node to the desired position is reached*/
		if (i == idx - 1)
		{
			/* Make the new node point to the next node*/
			new->next = temp->next;
			/* Make the previous node point to the new node*/
			temp->next = new;
			/* Return the pointer to the new node*/
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	/* Return NULL if the insertion is not possible*/
	return (NULL);
}
