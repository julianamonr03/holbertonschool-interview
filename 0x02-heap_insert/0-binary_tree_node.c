#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(binary_tree_t));

    if (!new)
    {
        return (NULL);
    }

    new->n = value;

    new->left = NULL;
    new->right = NULL;
    new->parent = parent;

    return (new);

}
