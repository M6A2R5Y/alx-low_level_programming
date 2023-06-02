#include "lists.h"
#include <stdio.h>
size_t print_list(const list_t *h)
{
	/* variable to count the number of nodes*/
	size_t count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		/* move to the next node*/
		h = h->next;
	}
	return(count);
}
