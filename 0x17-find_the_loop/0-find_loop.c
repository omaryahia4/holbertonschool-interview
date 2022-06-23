#include "lists.h"
/**
 * *find_listint_loop - function that finds the loop in a linked list.
 * @head: head of linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *first, *s;

if (head == NULL)
	return (NULL);

first = head;
s = head;

while (s && first && first->next)
{
	if (s->next)
		s = s->next;

	if (first->next && first->next->next)
		first = first->next->next;

	else
		return (NULL);

	if (s == first)
	{
		s = head;
		while (s && first && first->next)
		{
			if (s == first)
			{
				return (s);
			}
			s = s->next;
			first = first->next;
		}
	}
}
return (NULL);
}
