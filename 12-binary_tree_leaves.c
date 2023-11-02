#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in a binary tree
 * @tree: pointer to root node
 *
 * Return: count, or zero on failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
