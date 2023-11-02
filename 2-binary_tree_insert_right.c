#include "binary_trees.h"

/**
 * binary_tree_insert_right - set node to right of parent
 * @parent: parent node
 * @value: value of new node
 *
 * Return: node on success, else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;

	if (parent->right == NULL)
		node->right = NULL;
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;
	node->parent = parent;

	return (node);
}
