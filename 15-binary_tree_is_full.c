#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to root node
 *
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (tree == NULL)
		return (0);

	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (1);
	else if (tree->right == NULL && tree->left == NULL)
		return (0);

	check = binary_tree_is_full(tree->left);
	check = binary_tree_is_full(tree->right);

	if (check >= 1)
		return (0);

	return (1);
}
