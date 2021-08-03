#include "lists.h"

/**
 *add_nodeint - add new node at the beginning
 *@head: linked list
 *@n: data
 *Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_t *ptr = malloc(sizeof(struct listint_t));
	if(!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head->ptr;
	return *head;
}
