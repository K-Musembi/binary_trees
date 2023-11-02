#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to left of parent
 * @parent: the parent node
 * @value: value of new node
 *
 * Return: node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;

	if (parent->left == NULL)
		node->left = NULL;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;
	node->parent = parent;

	return (node);
}
