#include "binary_trees.h"
/**
 * binary_tree_depth - depth of given node
 *
 * @tree: pointer node of tree
 *
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth++;

	depth += binary_tree_depth(tree->parent);

	return (depth);
}
