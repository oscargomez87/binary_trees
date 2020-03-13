#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using
 * post-order traversal
 *
 * @tree: tree to go through
 * @func: function used to print a node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	if (tree->left == NULL && tree->right == NULL)
		func(tree->n);
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	if ((tree->left != NULL || tree->right != NULL) && tree->parent != NULL)
		func(tree->n);
	if (tree->parent == NULL)
		func(tree->n);
}
