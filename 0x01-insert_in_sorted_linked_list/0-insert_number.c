#include "lists.h"
/**
 * Function in C that inserts a number into a sorted singly linked list.
 * @head: Head of the node in list
 * @number: Number to insert in list
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *temp = *head;
    listint_t *new = malloc(sizeof(listint_t));

    new->n = number;

    if (!new)
    {
        return (NULL);
    }

    if (*head == NULL || new->n < (*head)->n)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        temp = *head;
        while (temp->next != NULL && temp->next->n < new->n)
        {
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
    return (new);

}
