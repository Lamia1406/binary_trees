#include "binary_trees.h"

/**
 * binary_tree_balance -  measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
}
