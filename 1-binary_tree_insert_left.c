#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - insert node to the left
 *
 * @parent: pointer to parent of node
 * @value: value
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_tree_node = binary_tree_node(parent, value);

	if (new_tree_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new_tree_node;
	}
	else
	{
		new_tree_node->left = parent->left;
		new_tree_node->parent = new_tree_node;
		parent->left = new_tree_node;
	}
	return (new_tree_node);
}
