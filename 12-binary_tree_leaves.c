#include "binary_trees.h"
/**
 * binary_tree_leaves - calcute leaf node
 *
 * @tree: pointer to node
 * Return: number of leaf node
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;

	if (tree->left == NULL && tree->right != NULL)
	{
		leaves += binary_tree_leaves(tree->right);
	}
	else if (tree->right != NULL && tree->left == NULL)
	{
		leaves += binary_tree_leaves(tree->left);
	}
	else
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
