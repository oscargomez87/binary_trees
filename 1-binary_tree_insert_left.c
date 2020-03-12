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
		node->left = binary_tree_node(node, parent->left->n);
		free(parent->left);
	}
	parent->left = node;
	return (node);
}
