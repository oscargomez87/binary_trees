#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node to the right of a parent node
 *
 * @parent: parent of the new node
 * @value: value of the node
 * Return: address of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		node->right = malloc(sizeof(binary_tree_t));
		if (node->right == NULL)
		{
			free(node);
			return (NULL);
		}
		node->right->n = parent->right->n;
		node->right->left = parent->right->left;
		node->right->right = parent->right->right;
		node->right->parent = node;
		free(parent->right);
	}
	parent->right = node;
	return (node);
}
