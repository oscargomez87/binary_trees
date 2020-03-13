#include "binary_trees.h"

/**
 * binary_tree_depth - finds the depth of a node in a binary tree
 *
 * @tree: node to measure the depth
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ct = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	while (tree)
	{
		tree = tree->parent;
		ct += 1;
	}
	return (ct - 1);
}
