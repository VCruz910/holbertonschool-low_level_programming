#include "lists.h"
/**
 * add_nodeint - Adds a node at the beginning
 * @head: Head of the list
 * @n: Element Value
 * Return: (*head).
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NewNode;

	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = *head;
	*head = NewNode;
	return (*head);
}
