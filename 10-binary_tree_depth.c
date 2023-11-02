#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth of binary tree
 * @tree: pointer to root node
 *
 * Return: height, or 0 on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l_count = 0, r_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1);
	else
		return (0);

	l_count = binary_tree_depth(tree->left);
	r_count = binary_tree_depth(tree->right);

	if (l_count > r_count)
		return (l_count);
	else
		return (r_count);
}
