#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: is the index of the node
 * Return: nth node, or NULL is failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int w = 0;

	if (head == NULL)
		return (NULL);

	while ((w < index) && head != NULL)
	{
		head = head->next;
		w++;
	}

	if (w == index)
		return (head);

	return (NULL);
}
