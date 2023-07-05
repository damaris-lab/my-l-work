#include "lists.h"
/**
 * listint_len - prints elements of list
 * @h: head of the node
 */ 
size_t listint_len(const listint_t *h)
{
		size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}


