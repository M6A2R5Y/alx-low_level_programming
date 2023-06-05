#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/*
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: Singly linked list node structure
 *              for alx project
 */
typedef struct listint_s
{
	/* Integer value stored in the node */
	int n;
	/*pointer to the next node*/
	struct listint_s *next;
}listint_t;
/*
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/*
 * listint_len - Counts the number of nodes in a linked list
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */
size_t listint_len(const listint_t *h);

/*
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: Pointer to the pointer of the head node of the list
 * @n: Integer value to be stored in the new node
 *
 * Return: Pointer to the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n);

/*
 * add_nodeint_end - Adds a new node at the end of a linked list
 * @head: Pointer to the pointer of the head node of the list
 * @n: Integer value to be stored in the new node
 *
 * Return: Pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/*
 * free_listint - Frees a linked list
 * @head: Pointer to the head node of the list
 */
void free_listint(listint_t *head);

/*
 * free_listint2 - Frees a linked list and sets the head to NULL
 * @head: Pointer to the pointer of the head node of the list
 */
void free_listint2(listint_t **head);

/*
 * pop_listint - Removes the head node of a linked list
 * @head: Pointer to the pointer of the head node of the list
 *
 * Return: The value stored in the head node
 */
int pop_listint(listint_t **head);

/*
 * get_nodeint_at_index - Retrieves a node at a given index in a linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node to be retrieved (starting from 0)
 *
 * Return: Pointer to the node at the given index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/*
 * sum_listint - Computes the sum of all the elements in a linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The sum of all the elements in the list
 */
int sum_listint(listint_t *head);

/*
 * insert_nodeint_at_index - Inserts a new node at a given index in a linked list
 * @head: Pointer to the pointer of the head node of the list
 * @idx: Index at which the new node should be inserted
 * @n: Integer value to be stored in the new node
 *
 * Return: Pointer to the newly added node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* delete_nodeint_at_index - deletes the node at the given index from the linked list
 * @head: A pointer to the head of the linked list
 * @index: The index of the node to delete.
 * Returns 0 on success, and -1 on error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
/* *reverse_listint - Reverses the linked list.
 * @head is a pointer to the head of the linked list.
 * Returns a pointer to the new head of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
/* print_listint_safe - prints the linked list to stdout, safely handling 
 * 	case where linked list is empty
 * Returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
/* free_listint_safe - Frees the linked list, safely handling the case where the list is empty
 * Returns the number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
/*  *find_listint_loop- Finds the first node in the linked list that forms a loop.
 *  Returns a pointer to the first node in the loop or
 *  NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)

#endif
