#include "binary_trees.h"

/**
 * binary_tree_uncle - find node's uncle
 * @node: pointer to node
 *
 * Return: uncle, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);

	if (parent == parent->parent->left)
		uncle = parent->parent->right;
	else
		uncle = parent->parent->left;

	if (uncle == NULL)
		return (NULL);

	return (uncle);
}
