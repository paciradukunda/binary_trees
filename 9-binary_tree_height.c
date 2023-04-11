#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - calculates height of given tree
 *
 * @tree: root of tree
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left++;
	else if (tree->right != NULL)
		right++;

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);

	return ((left > right) ? left : right);
}
