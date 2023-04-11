#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least one child
 *
 * @tree: pointer to nodes
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	if (tree->left == NULL && tree->right != NULL)
	{
		nodes += binary_tree_nodes(tree->right);
	}
	else if (tree->right != NULL && tree->left == NULL)
	{
		nodes += binary_tree_nodes(tree->left);
	}
	else
	{
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}

	return (nodes);
}
