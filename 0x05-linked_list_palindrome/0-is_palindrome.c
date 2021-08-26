#include "lists.h"
/**
 * is_palindrome - Function that checks if a singly linked list
 * is a palindrome.
 * @head: Head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	return (check(head, *head));
}

/**
 * check - Recursive function for check palindromes
 * @head: Head of the list
 * @right: far right values
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int check(listint_t **head, listint_t *right)
{
	if (right == NULL)
	{
		return (1);
	}
	/* Recursive method checking head of the list and far right from the list */
	return (check(head, right->next) && ((*head)->n == right->n) ?
			((*head) = (*head)->next), 1 : 0);
}
