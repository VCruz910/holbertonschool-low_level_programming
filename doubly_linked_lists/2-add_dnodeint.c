#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: Head of the list
 * @n: Element value
 * Return: NNode
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NNode;
	dlistint_t *H;

	NNode = malloc(sizeof(dlistint_t));
	if (NNode == NULL)
	{
		return (NULL);
	}

	NNode->n = n;
	NNode->prev = NULL;
	H = *head;
	if (H != NULL)
	{
		while (H->prev != NULL)
		{
			H = H->prev;
		}
	}

	NNode->next = H;
	if (H != NULL)
	{
		H->prev = NNode;
	}
	*head = NNode;
	return (NNode);
}
