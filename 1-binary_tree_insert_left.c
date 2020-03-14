#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_insert_left - Inserts a node to the left of a parent node
 *
 * @parent: parent of the node
 * @value: value of the node
 * Return: address of the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (parent->left != NULL)
	{
		node->left = malloc(sizeof(binary_tree_t));
		if (node->left == NULL)
		{
			free(node);
			return (NULL);
		}
		node->left->n = parent->left->n;
		node->left->left = parent->left->left;
		node->left->right = parent->left->right;
		node->left->parent = node;
		free(parent->left);
	}
	parent->left = node;
	return (node);
}
