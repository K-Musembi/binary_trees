#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perferct
 * @tree: pointer to root node
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, total;

	if (tree == NULL)
		return (0);

	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (1);
	else
		return (0);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	total = left + right;

	if ((total >= 1) || !(left && right))
		return (0);

	return (1);
}
