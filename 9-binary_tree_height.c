#include "binary_trees.h"
size_t _bt_height(const binary_tree_t *);
size_t max(size_t, size_t);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: tree to measure
 * Return: height of the tree, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree != NULL)
	{
		left_h = _bt_height(tree->left);
		right_h = _bt_height(tree->right);
		return (max(left_h, right_h));
	}
	return (0);
}

/**
 * _bt_height - since the root must not be counted the recursion occurs here
 *
 * @tree: tree to iterate through
 * Return: height of tree
 */
size_t _bt_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);
	left_h = _bt_height(tree->left);
	right_h = _bt_height(tree->right);
	return (1 + max(left_h, right_h));
}

/**
 * max - finds the max between 2 numbers
 *
 * @a: first number
 * @b: second number
 * Return: the max between a and b
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
