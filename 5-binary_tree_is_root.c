#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root of a binary tree
 *
 * @node: node to check
 * Return: 0 if it is not the root, 1 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
