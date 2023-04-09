#include "binary_trees.h"
/**
 * binary_tree_insert_right( - insert node to the left
 *
 * @parent: pointer to parent of node
 * @value: value
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_tree_node = malloc(sizeof(binary_tree_t));

    if (new_tree_node == NULL || parent == NULL)
        return (NULL);

    new_tree_node->n = value;
    new_tree_node->left = NULL;
    new_tree_node->parent = parent;
    new_tree_node->right = NULL;

    if (parent->left == NULL)
    {
        parent->right = new_tree_node;
    }
    else
    {
        new_tree_node->right = parent->right;
        new_tree_node->right->parent = new_tree_node;
        parent->right = new_tree_node;
    }

    return (new_tree_node);
}