#include "lists.h"

/**
 *add_nodeint_end - add a node at the end
 *@head: linked list
 *@n: new node data
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = malloc(sizeof(listint_t));

	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	while(ptr->n != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
}
