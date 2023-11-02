#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: pointer to root node
 * @func: function to call on each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
