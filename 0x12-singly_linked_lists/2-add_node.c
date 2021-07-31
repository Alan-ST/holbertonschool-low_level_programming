#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: list
 * @str: string
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h = NULL;
	int i;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	h->str = strdup(str);
	h->len = i;
	h->next = *head;
	*head = h;
	return (*h);
}
