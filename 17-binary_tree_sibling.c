#include "binary_trees.h"

/**
 * binary_tree_sibling - find node's sibling
 * @node: pointer to node
 *
 * Return: sibling, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;

	if (sibling == NULL)
		return (NULL);

	return (sibling);
}
