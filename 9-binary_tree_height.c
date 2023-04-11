#include "binary_trees.h"
/**
 * binary_tree_height - calculates height of given tree
 *
 * @tree: root of tree
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		height++;

	if (tree->left != NULL && tree->right != NULL)
		height += binary_tree_height(tree->left);
	else if (tree->left != NULL)
		height += binary_tree_height(tree->left);
	else if (tree->right != NULL)
		height += binary_tree_height(tree->right);
	else
		return (0);

	return (height);
}
