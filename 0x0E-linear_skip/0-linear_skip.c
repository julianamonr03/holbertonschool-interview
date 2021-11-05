#include "search.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: is a pointer to the head of the skip list to search in
 * @value:  is the value to search for
 *
 * You can assume that list will be sorted in ascending order
 *
 * Return: a pointer on the first node where value is located
 *         If value is not present in list or if head is NULL return NULL
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *prev, *next;
	size_t index_prev, index_next, i;

	if (!list)
		return (NULL);

	index_prev = 0;
	prev = list;
	index_next = 0;
	next = list;
	for (express = list->express; 1; express = express->express)
	{
		index_prev = index_next;
		prev = next;
		if (express)
		{
			printf("Value checked at index [%lu] = [%d]\n",
			       express->index, express->n);
			index_next = express->index;
			next = express;
		}
		else
		{
			for (; next; next = next->next)
				index_next = next->index;
		}
		if (!express || express->n >= value)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       index_prev, index_next);
	for (i = index_prev; prev; i++, prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
