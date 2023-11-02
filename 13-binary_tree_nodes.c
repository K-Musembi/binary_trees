#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: pointer to root node
 *
 * Return: count, or 0 if tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		sum += 1;

	sum += binary_tree_nodes(tree->left);
	sum += binary_tree_nodes(tree->right);

	return (sum);
}
