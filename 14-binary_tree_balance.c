#include "binary_trees.h"
#include <stdio.h>
int _bt_height(const binary_tree_t *);
int max(int, int);


/**
 * binary_tree_height - calculates the balance factor of a binary tree
 *
 * @tree: tree to calculate balance factor of
 * Return: the balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree != NULL)
	{
		left_h = _bt_height(tree->left);
		right_h = _bt_height(tree->right);
		return (left_h - right_h);
	}
	return (0);
}

/**
 * _bt_height - since the root must not be counted the recursion occurs here
 *
 * @tree: tree to iterate through
 * Return: height of tree
 */
int _bt_height(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

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
int max(int a, int b)
{
	return (a > b ? a : b);
}
