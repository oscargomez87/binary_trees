#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: binary tree to go through
 * @func: function to print node data
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);
	if (tree->left == NULL && tree->right == NULL)
		func(tree->n);
	if (tree->left != NULL && tree->right != NULL)
		func(tree->n);
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
