#include "binary_trees.h"
/**
 * binary_tree_inorder - in-order traversal of tree
 *
 * @tree: pointer to root
 * @func: function to print node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
