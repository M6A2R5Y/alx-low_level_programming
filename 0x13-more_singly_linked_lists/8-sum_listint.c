#include "lists.h"
int sum_listint(listint_t *head)
{
	/* Declare an integer variable to store the sum.*/
	int sum = 0;
	/*Declare a pointer to the current node.*/
	listint_t *temp = head;
	/* Iterate through the linked list, adding data in each node*/
	while (temp)
	{
		/* Add the data in the current node to the sum*/
		sum += temp->n;
		/*Move to the next node*/
		temp = temp->next;
	}
	/*Return the resulting sum*/
	return (sum);
}
