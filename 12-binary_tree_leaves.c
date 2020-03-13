#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: starting node to count the leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_number_r = 0, l_number_l = 0;

	if (tree != NULL)
	{
		l_number_l = binary_tree_leaves(tree->left);
		l_number_r = binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
			return (1 + l_number_l + l_number_r);
	}
	return (0 + l_number_l + l_number_r);
}
