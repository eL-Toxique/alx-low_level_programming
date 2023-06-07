#include "lists.h"
#include <stddef.h>

/**
 * listint_len - counts the number of nodes
 * @h:pointer to the starting of the list
 *
 * Return:element numbers
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
