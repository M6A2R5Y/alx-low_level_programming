#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;
	/* Check if the head pointer is NULL or points to NULL.*/
	if (!head || !*head)
	{
		return (0);
	}
	/*Declare a temporary pointer to the next node*/
	temp = (*head)->next;
	/*Save the data in the head node*/
	num = (*head)->n;
	/*Free the head node*/
	free(*head);
	/*Update the head pointer to the next node*/
	*head = temp;
	/*Return the data that was deleted*/
	return (num);
}
