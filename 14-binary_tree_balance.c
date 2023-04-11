#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_balance - checks if noed is balanced
 *
 * @tree: pointer to node
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_tree_height;
	int left_tree_heigth;

	if (tree == NULL)
		return (0);

	right_tree_height = binary_tree_height(tree->right);
	left_tree_heigth = binary_tree_height(tree->left);

	printf("right: %d ", right_tree_height);
	printf("left: %d\n\n", left_tree_heigth);

	return (left_tree_heigth - right_tree_height);
}
