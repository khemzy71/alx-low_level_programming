#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head pointer of lked list
 * @idex: index to insert new node
 * @n: new nodes data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int x = 0;
	listint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (x < (idx - 1))
	{
		tmp = tmp->next;
		x++;

		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
