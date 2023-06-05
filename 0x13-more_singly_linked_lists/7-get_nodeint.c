#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declare an unsigned integer variable to keep track of the current index.*/
	unsigned int i = 0;
	/*Declare a pointer to the current node.*/
	listint_t *temp = head;
	/* Traverse the linked list until reaching the desired index*/
	while (temp && i < index)
	{
		/*move to the next node*/
		temp = temp->next;
		/* Increment the counter*/
		i++;
	}
	/*Return the node at the given index, or NULL if not found*/
	return (temp ? temp : NULL);
}
