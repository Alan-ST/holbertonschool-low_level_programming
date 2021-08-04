#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a list
 * @head: list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
