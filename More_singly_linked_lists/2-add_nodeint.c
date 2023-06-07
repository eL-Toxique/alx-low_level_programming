#include "lists.h"

/**
 *add_nodeint - adds a new node at the begining
 *@head: pointer to the head of list_t list
 *@n:int in listint_t list
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}
