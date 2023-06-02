#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * @h: A pointer to the head of the list.
 * @head: Pointer to the head of the list.
 * 
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function to print all elements of the linked list */
size_t print_list(const list_t *h);

/* Function to get the number of nodes in the linked list */
size_t list_len(const list_t *h);

/* Function to add a new node at the beginning of the linked list */
list_t *add_node(list_t **head, const char *str);

/* Function to add a new node at the end of the linked list */
list_t *add_node_end(list_t **head, const char *str);

/* Function to free all the nodes of the linked list */
void free_list(list_t *head);
/* _putchar - writes a character to the stdout*/
int _putchar(char c);

#endif
