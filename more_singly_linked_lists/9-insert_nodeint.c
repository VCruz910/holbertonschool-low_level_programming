#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts new node at a given position
 * @head: Header of list
 * @idx: Index
 * @n: Element
 * Return: New Node (NNode)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int NAdd;
	listint_t *NNode;
	listint_t *NH;

	NH = *head;
	if (idx != 0)
	{
		for (NAdd = 0; NAdd < idx - 1 && NH != NULL; NAdd++)
			NH = NH->next;
	}
	if (NH == NULL && idx != 0)
		return (NULL);
	NNode = malloc(sizeof(listint_t));
	if (NNode == NULL)
		return (NULL);
	NNode->n = n;
	if (idx == 0)
	{
		NNode->next = *head;
		*head = NNode;
	}
	else
	{
		NNode->next = NH->next;
		NH->next = NNode;
	}
	return (NNode);
}
