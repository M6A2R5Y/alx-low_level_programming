#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head:Pointer to the head of the list to be freed
 */
void free_list(list_t *head)
{
	list_t *current;
	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
