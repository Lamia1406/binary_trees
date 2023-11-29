#include "binary_trees.h"

/**
 * binary_tree_size - Find the size of the binary tree
 * @tree: pointer to the root node
 *
 * Return: size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_S = 0, right_S = 0;

	if (tree == NULL)
		return (0);

	right_S = binary_tree_size(tree->right);
	left_S = binary_tree_size(tree->left);

	return (left_S + right_S + 1);
}

