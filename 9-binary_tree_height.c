#include "binary_trees.h"
void _bt_height(const binary_tree_t *, size_t *, size_t *);

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: tree to measure
 * Return: height of the tree, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0, max_h = 0;

	if (tree != NULL)
	{
		_bt_height(tree->left, &left_h, &right_h);
		if (left_h > right_h)
			max_h = left_h;
		else
			max_h = right_h;
		left_h = 0;
		right_h = 0;
		_bt_height(tree->right, &left_h, &right_h);
		if (left_h > max_h)
			max_h = left_h;
		if (right_h > max_h)
			max_h = right_h;
	}
	return (max_h);
}

/**
 * _bt_height - recursively iterates through the tree
 *
 * @tree: binary tree to iterate through
 * @left: pointer used to count left side height
 * @right: pointer used to count right side height
 */
void _bt_height(const binary_tree_t *tree, size_t *left, size_t *right)
{
	if (tree != NULL)
	{
		_bt_height(tree->left, left, right);
		*left += 1;
		_bt_height(tree->right, left, right);
		*right += 1;
	}
}
