#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: pointer to root node
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;

	if (tree == NULL)
		return (0);

	balance_factor = height(tree->left) - height(tree->right);

	return (balance_factor);
}

/**
 * height - measures height of sub-tree
 * @stree: root node of sub-tree
 *
 * Return: height, or 0 if sub-tree is empty
 */
int height(const binary_tree_t *stree)
{
	int left, right, max = 0;

	if (stree)
	{
		if (stree->left)
			left = height(stree->left) + 1;
		else
			left = 0;

		if (stree->right)
			right = height(stree->right) + 1;
		else
			right = 0;

		max += (left > right ? left : right);
	}
	return (max);
}
