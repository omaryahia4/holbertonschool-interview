#include "lists.h"
/**
 * is_palindrome - cheks if a linkedlist is palindrome.
 * @head: the head node of linkedlist
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current;
	int count = 0;

	if (*head == NULL)
		return (0);
	current = *head;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	if (count % 2 != 0)
	{
		return (0);
	}

	return (1);
}
/**
 * checkPalindrome - recursive function that compares nodes
 * @left: pointer to the left node
 * @right: pointer to the right node
 * Return: result of recursion
 */
int checkPalindrome(listint_t **left, listint_t *right)
{
	int result = checkPalindrome(left, right->next) && ((*left)->n == right->n);
	(*left) = (*left)->next;

	return (result);
}
