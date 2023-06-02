#include <stddef.h> 
#include <stdlib.h> 
#include <string.h> 
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the pointer to the head of the list_t list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	unsigned int len = strlen(str);
	new_node = malloc(sizeof(list_t));
	/* Allocate memory for the newnode */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* duplicate the string and store it in the new node*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return(NULL);
	}
	/* set the length of the string*/
	new_node->len = len;
	/* set the next pointer of the new node to the current head*/
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}	
