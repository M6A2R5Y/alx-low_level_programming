#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Allocate memory for the new node.*/
	listint_t *new;
	listint_t *temp = *head;
	/* Check if the allocation failed. */
	if (!new)
	{
		/* If the allocation failed return 'NULL'*/
		return (NULL);
	}
	/*Intialize the new node*/
	new->n = n;
	new->next = NULL;
	/*If the list is empty, set the new node as the head.*/
	if(*head == NULL)
	{
		*head = new;
		return(new);
	}
	/*Find the last node in the list*/
	while (temp->next)
	{
		temp = temp->next;
	}
	/*Set the last node's next pointer to the new node*/
	temp->next = new;
	/*Return the new node*/
	return(new);
}
