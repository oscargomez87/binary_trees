#include "binary_trees.h"

/**
 * binary_tree_node - Adds a node to a binary tree
 *
 * @parent: parent of the node
 * @value: value of the node
 * Return: address of the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent == NULL)
		node->parent = NULL;
	else
		node->parent = parent;
	return (node);
}
