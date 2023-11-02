#include "binary_trees.h"

/**
 * binary_tree_height - measure height of the binary tree
 * @tree: pointer to root node
 *
 * Return: height, or 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, max = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l_height = binary_tree_height(tree->left) + 1;
	else
		l_height = 0;

	if (tree->right)
		r_height = binary_tree_height(tree->right) + 1;
	else
		r_height = 0;

	max += (l_height > r_height ? l_height : r_height);

	return (max);
}
