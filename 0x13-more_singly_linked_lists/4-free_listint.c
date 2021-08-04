#include "lists.h"
/**
 * free_listint - frees a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *nex = NULL;

	while (head != NULL)
	{
		nex = head->next;
		free(head);
		head = nex;
	}
}
