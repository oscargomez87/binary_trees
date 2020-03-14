#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: binary tree to count
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_l = 0, nodes_r;

	if (tree == NULL)
		return (0);
	nodes_l = binary_tree_nodes(tree->left);
	nodes_r = binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + nodes_l + nodes_r);
	return (0);
}
