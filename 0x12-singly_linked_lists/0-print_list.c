#include "lists.h"
#include <stdio.h>
size_t print_list(const list_t *h)
{
	/* variable to count the number of nodes*/
	size_t count = 0;
	/* iterate through the linked list until h becomes NULL*/
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[0] (nil)\n";
		}
		else
		{
		        /* print the length and the string*/
			printf("[%u] %s\n", h->len, h->str);
		}
		
		/* move to the next node*/
		h = h->next;
		/* Increment of count of nodes printed*/
		count++;
	}
	return(count);
}
