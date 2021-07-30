#ifndef _LISTS_
#define _LISTS_


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
listint_t *insert_node(listint_t **head, int number);
listint_t *insert_node(listint_t **head, int number);
listint_t *add_nodeint_end(listint_t **head, const int n);


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#endif /* _LISTS_ */
