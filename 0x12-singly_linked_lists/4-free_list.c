#include "lists.h"
/**
 * free_list - frees a list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *h, *l;

	h = head;
	l = NULL;
	while (h != NULL)
	{
		l = h->next;
		free(h->str);
		free(h);
		h = l;
	}
}
