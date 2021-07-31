#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: list
 * @str: string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *n = *head;
	int i = 0;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	h->str = strdup(str);
	h->len = i;
	h->next = NULL;
	if (*head == NULL)
		*head = h;
	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = h;
	}
	return (h);
}
