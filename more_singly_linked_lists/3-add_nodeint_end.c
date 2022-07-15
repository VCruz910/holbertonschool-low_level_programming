#include "lists.h"
/**
 * add_nodeint_end - Adds new node at the end
 * @head: Head of the list
 * @n: Elements
 * Return: (*head)
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NewNode, *Temp;

	(void)Temp;
	NewNode = malloc(sizeof(listint_t));
	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->next = NULL;
	Temp = *head;
	if (*head == NULL)
	{
		*head = NewNode;
	}
	else
	{
		while (Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next = NewNode;
	}
	return (*head);
}

