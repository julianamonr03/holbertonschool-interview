#include "lists.h"

/**
 * Function in C that inserts a number into a sorted singly linked list.
 * @head: Head of the node in list
 * @number: Number to insert in list
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *current;
    listint_t *new = malloc(sizeof(listint_t));

    if (!new)
    {
        return (NULL);
    }

    current = *head;

    while (current->next != NULL && current->next->n < number)
    {
        current = current->next;
    }

}
