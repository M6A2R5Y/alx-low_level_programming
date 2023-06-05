#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	/* allocate memory for the new node*/
	new= malloc(sizeof(listint_t));
	/* Check if the allocation failed.*/
	if (!new)
	{
		/*If allocation failed return 'NULL'*/
		return (NULL);
	}
	/*Initialize the new node*/
	new->n = n;
	new->next = *head;
	/*Update the head pointer to point to the new node*/
	*head = new;
	/*Return the new node*/
	return (new);
}
