#include "binary_trees.h"
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
	binary_tree_t *new_tree_node;

	if (parent == NULL)
		return (NULL);

	new_tree_node = binary_tree_node(parent, value);
	if (new_tree_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_tree_node->left = parent->left;
		parent->left->parent = new_tree_node;
	}
	parent->left = new_tree_node;

	return (new_tree_node);
}
