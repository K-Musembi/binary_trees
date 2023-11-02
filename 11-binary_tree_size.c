#include "binary_trees.h"

/**
 * binary_tree_size - measure size of the binary tree
 * @tree: pointer to root node
 *
 * Return: size, or 0 on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right, size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_size(tree->left);
	else
		left = 0;

	if (tree->right)
		right = binary_tree_size(tree->right);
	else
		right = 0;

	return (size + left + right);
}
