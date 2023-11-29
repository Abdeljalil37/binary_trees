#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = 1 + binary_tree_balance(tree->left);
		if (tree->right)
			r_height = 1 + binary_tree_balance(tree->right);
	}
	else
	{
		return (0);
	}
	return (l_height - r_height);
}
