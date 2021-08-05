#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: list
 * Return: nodes
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *nex = NULL;
	
	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = nex;
	}
	*head = p;
	return (*head);
}
